def binarySearch(lst,key):
  found = False
  start = 0
  end = len(lst)
  while not found and start != end:
    mid = int((start+end)/2) + 1
    if lst[mid] == key:
      found = True
      break;
    elif key > lst[mid]:
      start = mid + 1 
    else:
      end = mid - 1 
  if found:
    print("Number found in the list",mid)
  else:
    print("Number not found in the given list",key)

lst = list(map(int,input("Enter numbers: ").split()))
lst.sort()
print("Sorted list: ",lst)
key = int(input("Enter key: "))
binarySearch(lst,key)
