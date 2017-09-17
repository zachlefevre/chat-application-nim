import db_sqlite

#[
Create the sqlite database. Name it tweeter.db
]#
var db = open("database/tweeter.db", "", "", "")


#[
Execute the following SQL query. Convert it into a SQL query, actionable by db.exec
If the table does not already exist, create a new table.
The table contains username, which is the primary key.
]#
db.exec(sql"""
  CREATE TABLE IF NOT EXISTS User(
    username text PRIMARY KEY
  );
""");

#[
Execute the given SQL query.
If the Following table does not exist, create a new table.
The table contains:
  the username of the follower,
  the username of who the follower follows,
    the follower and the followed_user together create the primary KEY
    the follower key references a value on the User table
    the followed_user references a value on the User table

]#

db.exec(sql"""
  CREATE TABLE IF NOT EXISTS Following(
    follower text,
    followed_user text,
    PRIMARY KEY (follower, followed_user),
    FOREIGN KEY (follower) REFERENCES User(username),
    FOREIGN KEY (followed_user) REFERENCES User(username)
  );
""");

#[
Create the Message table if it does not already exist.
The Message table contains:
  username which is text
  time which is an integer
  message which is text and is not NULL
    username references a value on the User table
]#
db.exec(sql"""
  CREATE TABLE IF NOT EXISTS Message(
    username text,
    time integer,
    msg text NOT NULL,
    FOREIGN KEY (username) REFERENCES User(username)
  )
""");


echo("database created");

db.close();
