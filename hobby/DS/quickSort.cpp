#include<iostream>
using namespace std;

void print(int a[],int size)
{
  for(int i = 0;i < size;i++)
  {
    cout<<a[i]<<", ";
  }
  cout<<endl;
}
void quickSort(int a[],int size)
{
  int item,i,j,list[size];
  for(i = 1;i < size;i++)
  {
    item = a[i];
    for(j = i-1;j >= 0 && a[j] > item;j--)
      a[j+1] = a[j];
    a[j+1] = item;
  }
  print(a,size);
}

int main()
{
  int a[10] = {10,7,5,3,1,9,6,8,2,0},size = 10;
  print(a,size);
  quickSort(a,size);
  return 0;
}