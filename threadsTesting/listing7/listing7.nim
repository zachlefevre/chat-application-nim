import re

let pattern = re"([^\s]+)\s([^\s]+)\s(\d+)\s(\d+)"

var str = "en Nim_(Programming_Language) 1 70231"
var matches : array[4, string]
let start = find(str, pattern, matches)

doAssert(start == 0)
doAssert(matches[0] == "en")
doAssert(matches[1] == "Nim_(Programming_Language)")
doAssert(matches[2] == "1")
doAssert(matches[3] == "70231")
echo("parsed successfully")
