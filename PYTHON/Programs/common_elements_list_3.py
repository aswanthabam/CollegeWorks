# Python program to find common elements in two list
def useSet(lst1,lst2,lst3):
  st1 = set(lst1)
  st2 = set(lst2)
  st3 = set(lst3)
  return list(st1.intersection(st2,st3))

lst1 = [1,2,3,4,5,6,7,8,9]
lst2 = [2,3,4,5,6,7,9,10]
lst3 = [34,4,5,6,8,29,10,43]
print("List 1:",lst1)
print("List 2:",lst2)
print("List 3:",lst3)
print("Common elements:",useSet(lst1,lst2,lst3))