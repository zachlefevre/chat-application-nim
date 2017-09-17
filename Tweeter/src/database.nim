import times

#[
User is a reference type. The user properties are a username and a list
  storing who the user follows.
Message is a reference type. The message properties are the username of the
  creator, the time that the message was created, and the message contents.
]#

type
  User* = object
    username*: string
    following*: seq[string]

  Message* = object
    userame*: string
    time*: Time
    msg*: string
