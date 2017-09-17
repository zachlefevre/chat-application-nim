import asyncdispatch, jester

routes:
  get "/":
    resp("<h1>hello world</h1>")

runForever()
