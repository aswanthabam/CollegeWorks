# find square and cube in tuple

def square_cube(lst):
  return [(i,i**2, i**3) for i in lst]
lst = [(lambda x:int(x) if x.isdigit() else exit("Not a valid number"))(x) for x in input("Enter elements: ").split()]
print("Result:",square_cube(lst))