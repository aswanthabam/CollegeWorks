# program to find minimum and maximum k elemnts in a tuple

def find(tuple, k):
  if k>len(tuple):print("K is grater than the length")
  st1 = sorted(tuple)
  min,max = st1[:k],st1[-k:]
  max.reverse()
  return min,max

nums = (1,65, 65 ,3, 252,525,21,6526,162,62,6215,256)
print("Tuples: ",nums)
c = int(input("How many numbers: "))
min,max = find(nums,c)
print(f"Minimum {c} numbers : ",min)
print(f"Maximum {c} numbers : ",max)