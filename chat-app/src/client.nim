import os, threadpool, asyncdispatch, asyncnet, protocol

proc connect(socket: Asyncsocket, serverAddr: string) {.async.} =
  #[
  The role of `connect` is to:
    asynchronously connect the client socket to the server socket on port 7687
    loop forever, waiting for messages from the server.

    todo(zachary): The `socket.connect` procedure pauses the `connect` procedure indefinitely.
      The `socket.connect` procedure does successfully connect to the server, because later
      in the program `socket.send` is used sucessfully.
  ]#

  echo("connecting to ", serverAddr, ":", "7687")
  await socket.connect(serverAddr, 7687.Port)
  echo("connected")
  while true:
    let line = await socket.recvLine()
    let parsed = parseMessage(line)
    echo(parsed.username, " : ", parsed.message)


echo("chat application started")
if(paramCount() < 2):
  quit("Please specify the server address, e.g. " & getAppFileName() & " localhost Zachary")

let svrAddr = paramStr(1)
let userName = paramStr(2)
var socket = newAsyncSocket()
asyncCheck connect(socket, svrAddr)

var msgFlowVar = spawn stdin.readLine()
while true:
  if msgFlowVar.isReady():
    let message = createMessage(username, ^msgFlowVar)
    asyncCheck socket.send(message)
    msgFlowVar = spawn stdin.readLine()
  asyncdispatch.poll()
