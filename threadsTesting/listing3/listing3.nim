var data = "Hello World"

proc countData(data: string) {.thread.} =
  for i in 0 .. <data.len:
    stdout.write($i)
  echo()

#threads is an array of two threads which will run procedures that accept strings as parameters.
var threads: array[2, Thread[string]]
createThread[string](threads[0], countData, data)
createThread[string](threads[1], countData, data)
joinThreads(threads)
