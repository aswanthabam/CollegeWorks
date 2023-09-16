# Program to store marks of student and finc average mark of student

def findAvg(data):
  _data = {}
  for k,v in data.items():
    tmp = 0
    for i in v:
      tmp += i
    tmp = tmp / len(v)
    _data[k] = tmp
  return _data

data = {
  1:[23,45,50],
  2:[34,45]
}
print("Data:",data)
print("Average: ",findAvg(data))