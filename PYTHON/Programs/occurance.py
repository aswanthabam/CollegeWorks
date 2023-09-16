# Python program to sort a list in the terms of occurance of characters

def sort(string):
  occ = {}
  for i in string:occ[i] = occ.get(i,0) + 1
  print(occ)
  return sorted(occ.items(), key=lambda x: x[1], reverse=True)
print(sort(input("Enter string: ")))