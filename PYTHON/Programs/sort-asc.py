# sort a list in non decreacing order
def srt(lst):
  for i in range(len(lst) -1):
    for i in range(len(lst) - i - 1):
      if lst[i] > lst[i+1]:
        lst[i],lst[i+1] = lst[i+1],lst[i]
  for i in lst:
    print(i,end=", ")
  print()
  
lst = [int(i) for i in input("Enter list: ").split()]
srt(lst)