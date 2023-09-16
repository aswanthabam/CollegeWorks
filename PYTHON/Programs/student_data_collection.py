# Python program to collect student data in the form of dictionary
def collect(i):
  return {
    "name":input(f"Enter name of student {i}: "),
    "rollno":input(f"Enter roll number of student {i}: "),
    "gender":input(f"Enter gender of student {i}: ")
  }
def collectAll():
  count = int((lambda x: int(x) if x.isdigit() else exit("Enter a valid number"))(input("Enter number of students: ")))
  print("Data collected: ",[collect(i) for i in range(1,count+1)])

collectAll()