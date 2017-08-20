import json
type
  Message* = object
    username*: string
    message*: string

proc parseMessage*(data: string): Message =
  let dataJson = parseJson(data)
  result.username = dataJson["username"].getStr()
  result.message = dataJson["message"].getStr()

proc createMessage*(username, message: string): string =
  result = $(%{
    "username": %username,
    "message": %message
  }) & "\c\l"

when isMainModule:
  block:
    let data = """
    {
    "username": "Zachary",
    "message": "Howdy there"
    }
    """
    let parsed = parseMessage(data)
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
  block:
    let expected = """{"username":"Zachary","message":"howdy there"}""" & "\c\l"
    let created = createMessage("Zachary", "howdy there")
    doAssert created == expected
    echo "All Tests Passed"
