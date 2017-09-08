import os
proc readPageCount(filename: string) =
  for line in filename.lines:
    echo(line)

when isMainModule:
  let file = "testData.pagecounts-20160101-050000"
  let path = parentDir(getCurrentDir()).joinPath(file)
  readPageCount(path)
