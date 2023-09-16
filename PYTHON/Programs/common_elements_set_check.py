# Python program to check if there is common elements in a list using set intersection and list comprehension
def useSet(lst1,lst2):
  st1 = set(lst1)
  st2 = set(lst2)
  return len(st1.intersection(st2)) > 0
def useList(lst1,lst2):
  return len([x for x in lst1 if x in lst2]) > 0

lst1 = [1,2,3,4,5,6,7,8,9]
lst2 = [2,3,4,5,6,7,9,10]
print("Using set intersection:",useSet(lst1,lst2))
print("Using list comprehension:",useList(lst1,lst2))