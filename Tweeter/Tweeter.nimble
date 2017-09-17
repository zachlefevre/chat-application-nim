# Package

version       = "0.1.0"
author        = "zachlefevre"
description   = "A simple twitter clone. Developed in Nim in Action."
license       = "MIT"

bin = @["tweeter"]
skipExt = @["nim"]

# Dependencies

requires "nim >= 0.17.0"
requires "jester >= 0.0.1"
