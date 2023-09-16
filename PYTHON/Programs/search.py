# Python program to search a number from list, accept values from user
def search(lst,num):
  found = 0
  index = -1
  for i in lst:
    if i == num :
      found = True
      index = lst.index(i)
      break
  return found,index

lst = [(lambda x: int(x) if x.isdigit() else exit("Not a valid number"))(x)
      for x in input("Enter list elements: ").split()]
num = (lambda x: int(x) if x.isdigit() else exit("Enter a number"))(input("Enter element: "))
res = search(lst,num)
if res[0]:
  print("Element found at index",res[1])
else:
  print("Element not found")