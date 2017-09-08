import os, parseUtils
proc parse(line: string, domainCode, pageTitle: var string, countViews, totalSize: var int) =
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

proc readPageCount(fileName: string) =
  var domainCode = ""
  var pageTitle = ""
  var countViews = 0
  var totalSize = 0
  var mostPopular = ("", "", 0, 0)
  for line in fileName.lines:
    parse(line, domainCode, pageTitle, countViews, totalSize)
    if domainCode == "en" and countViews>mostPopular[2]:
      mostPopular = (domainCode, pageTitle, countViews, totalSize)
      echo mostPopular

when isMainModule:
  let file = "testData.pagecounts-20160101-050000"
  let path = parentDir(getCurrentDir())
  readPageCount(path.joinPath(file))
