import os, threadpool, asyncdispatch, asyncnet, protocol, strutils
if(paramCount() == 0):
  quit("Please specify the server address, e.g. " & getAppFileName() & " localhost")

proc connect(socket: Asyncsocket, serverAddr: string) {.async.} =
  echo("connecting to ", serverAddr, ":", "7876")
  await socket.connect(serverAddr, 7876.Port)
  echo("connected")

  while true:
    let line = await socket.recvLine()
    let parsed = parseMessage(line)
    echo(parsed.username, "said", parsed.message)

echo("chat application started")

let svrAddr = paramStr(1)
var socket = newAsyncSocket()
asyncCheck connect(socket, svrAddr)


var msgFlowVar = spawn stdin.readLine()
while true:
  let msgFlowVar = spawn stdin.readLine()
  if msgFlowVar.isReady():
    let message = createMessage("Zachary", ^msgFlowVar)
    asyncCheck socket.send(message)

asyncdispatch.poll()
