import os, parseUtils, threadpool, strutils

type
  Stats = ref object
    domainCode, pageTitle: string
    countViews, totalSize: int

proc newStats(): Stats =
    Stats(domainCode: "", pageTitle: "", countViews: 0, totalSize: 0)

proc `$`(stat: Stats): string =
  "domainCode: $#, pageTitle: $#, countViews: $#, totalSize: $#" % [
    stat.domainCode, stat.pageTitle, $stat.countViews, $stat.totalSize
  ]

proc parse(line: string, domainCode, pageTitle: var string, countViews, totalSize: var int) =
  if line.len == 0: return
  var i = 0;
  domainCode.setlen(0)
  i.inc(parseUntil(line, domainCode, {' '}, i))
  i.inc();
  pageTitle.setlen(0)
  i.inc(parseUntil(line, pageTitle, {' '}, i))
  i.inc();
  countViews = 0
  i.inc(parseInt(line, countViews, i))
  i.inc()
  totalSize = 0
  i.inc(parseInt(line, totalSize, i))
  i.inc()

proc parseChunk(chunk: string): Stats =
  result = newStats()
  var domainCode = ""
  var pageTitle = ""
  var countViews = 0
  var totalSize = 0
  for line in chunk.splitLines():
    parse(line, domainCode, pageTitle, countViews, totalSize)
    if domainCode == "en" and countViews > result.countViews:
      result = Stats(domainCode: domainCode, pageTitle: pageTitle, countViews: countViews, totalSize: totalSize)
proc readPageCount(filename: string, chunkSize: int) =
  var file = open(filename)
  var responses = newSeq[FlowVar[Stats]]()
  var buffer = newString(chunkSize)
  var leftOver = 0;

  while not endOfFile(file):
    let reqSize = chunkSize - leftOver
    let readSize = file.readChars(buffer, leftOver, reqSize) + leftOver
    var chunkLen = readSize
    while chunkLen > 0 and buffer[chunkLen - 1] notin NewLines:
      chunkLen.dec

    responses.add(spawn parseChunk(buffer[0 .. <chunkLen]))
    leftOver = readSize-chunkLen
    buffer[0 .. <leftOver] = buffer[readSize - leftOver .. ^1]

  var mostPopular = newStats()
  for resp in responses:
    let candidate = ^resp
    if candidate.countViews > mostPopular.countViews:
      mostPopular = candidate
  echo("Most Popular: ", $mostPopular)

  file.close()
when isMainModule:
  let file = "testData.pagecounts-20160101-050000"
  let path = parentDir(getCurrentDir())
  readPageCount(path.joinPath(file), 1_000_000)
