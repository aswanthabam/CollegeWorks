# Print perfect numbers in the given range
lim = int(input("Enter a number more than 5: "))
lst = []

for x in range(5,lim+1):
  sum = 0
  for i in range(1,int(x/2)+1):
    if x % i == 0:sum+=i
  if sum==x:
    lst.append(x)
print("Perfect numbers in the given range is : ", end="")
for i in lst:print(i,end=" ")
print()