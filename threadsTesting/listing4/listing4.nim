import threadpool
var data = "00000000"

proc countData(data: string) =
  for i in 0 .. <data.len:
    stdout.write(data[i])

#[
The data variable is wrapped in some ThreadVar and passed to
what is essentially countData(threadVar){.thread.}. As the two threads execute,
they are working on data in different states.
]#

spawn countData(data)
data = "11111111"
spawn countData(data)

sync()
