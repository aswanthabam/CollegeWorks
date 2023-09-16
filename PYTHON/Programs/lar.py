# Program to find the largest number in the list
l1 = input("Enter elements: ").split()
li = []
for i in l1:
  if i.isdigit():
    li.append(int(i))
print("Largest Number: ",max(li))