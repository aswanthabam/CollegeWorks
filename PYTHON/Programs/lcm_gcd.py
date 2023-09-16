# Program to find lcm and gcd of two numbers
def lcm(a,b):
  greater = a if a > b else b 
  while True:
    if greater % a == 0 and greater % b == 0:
      lcm = greater
      return lcm
    greater += 1 
def gcd(a,b):
  lesser = b if a >b else a 
  for i in range(lesser,0,-1):
    if a % i == 0 and b % i == 0:
      gcd = i 
      return i 

a = int(input("Enter number: "))
b = int(input("Enter 2nd no: "))
print("LCM is:",lcm(a,b))
print("GCD:",gcd(a,b))