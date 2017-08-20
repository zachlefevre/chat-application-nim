import os, threadpool
echo("chat application started")
if(paramCount() == 0):
  quit("Please specify the server address, e.g. " & getAppFileName() & " localhost")
let svrAddr = paramStr(1)
echo("connecting to ",svrAddr)
while true:
  let msg = spawn stdin.readLine()
  echo("Sending \"",^msg,"\"")
