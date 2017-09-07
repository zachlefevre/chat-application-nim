import bigints
proc add*(a, b: int): int = a + b
proc add*(a, b: BigInt): BigInt = a + b


when isMainModule:
  let a = 4
  let b = 5
  let c = 255
  block:
    doAssert(add(a,b) == (a+b))
  block:
    doAssert(add(add(a,b),c) == a + b + c)
  echo "All Tests Passed"
