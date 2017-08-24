import asyncdispatch, asyncnet

type
  Client = ref object
    socket: Asyncsocket
    netAddr: string
    id: int
    connected: bool
  Server = ref object
    socket: Asyncsocket
    clients: seq[Client]

proc newServer(): Server = Server(socket: newAsyncSocket(), clients: @[])

proc loop(server: Server, port = 7876) {.async.} =
  server.socket.bindAddr(port.Port)
  server.socket.listen()

  while true:
    let (netADdr, clientSocket) = await server.socket.acceptAddr()
    echo ("Accepted connection from " & netAddr)
    let client = Client(
      socket: clientSocket,
      netAddr: netAddr,
      id: server.clients.len,
      connected: true
    )
    server.clients.add(client)

waitFor loop(newServer())
