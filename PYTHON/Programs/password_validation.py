# Python program to validate a password

def validate(password):
  lower = False
  num = False
  upper = False
  special = False
  length = len(password) >= 6
  for i in password:
    if i.isalnum():
      if i.islower():
        lower = True
      elif i.isupper():
        upper = True
      elif i.isdigit():
        num = True
    elif i == "@" or i == "#" or i == "$":
      special = True
  valid = lower and upper and num and special and length
  # Print messges
  print("Status: ")
  if valid:
    if lower:print("\t* Password contains lower case")
    if upper:print("\t* Password contains upper case")
    if num:print("\t* Password contains number")
    if special:print("\t* Password contains special character")
    if length:print("\t* Password length is grater than 5")
  else:
    if not lower:print("\t* Password doesnt contains a lower case")
    if not upper:print("\t* Password doesnt contains an upper case")
    if not num:print("\t* Password doesnt contains a number")
    if not special:print("\t* Password doesnt contains a special character")
    if not length:print("\t* Password length is less than 6")
  return valid

if validate(input("Enter password: ")):
  print("Result : Password is valid")
else:
  print("Result : Password is invalid")