# Python program to find common elements in two list
def useSet(lst1,lst2):
  st1 = set(lst1)
  st2 = set(lst2)
  return list(st1.intersection(st2))

lst1 = [1,2,3,4,5,6,7,8,9]
lst2 = [2,3,4,5,6,7,9,10]
print("List 1:",lst1)
print("List 2:",lst2)
print("Common elements:",useSet(lst1,lst2))