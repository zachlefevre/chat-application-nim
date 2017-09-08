import parseutils

var str = "en Nim_(Programming_Language) 1 70231"

var i = 0;
var domainCode = ""
i.inc(parseUntil(str, domainCode, {' '}, i))
i.inc()
var pageTitle = ""
i.inc(str.parseUntil(pageTitle, {' '}, i))
i.inc()
var countView = 0
i.inc(parseInt(str, countView, i))
var totalSize = 0
i.inc(str.parseInt(totalSize, i))

echo(domainCode)
echo(pageTitle)
