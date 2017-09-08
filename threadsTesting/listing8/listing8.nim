import strutils

var str = "en Nim_(Programming_Language) 1 70231"
var matches = str.split()

doAssert(matches[0] == "en")
doAssert(matches[1] == "Nim_(Programming_Language)")
doAssert(matches[2] == "1")
doAssert(matches[3] == "70231")
echo("parsed successfully")
