import json
type
  Message* = object
    username*: string
    message*: string

proc parseMessage*(data: string): Message =
  let dataJson = parseJson(data)
  result.username = dataJson["username"].getStr()
  result.message = dataJson["message"].getStr()


when isMainModule:
  block:
    let data = """
    {
    "username": "Zachary",
    "message": "Howdy there"
    }
    """
    let parsed = parseMessage(data)
    echo parsed
    doAssert parsed.username == "Zachary"
    doAssert parsed.message == "Howdy there"
  block:
    let data = """foobar"""
    try:
      let parsed = parseMessage(data)
      doAssert false
    except JsonParsingError:
      doAssert true
    except:
      doAssert false
    echo "All Tests Passed"
