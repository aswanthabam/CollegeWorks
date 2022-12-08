#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void print(int a[],int size)
{
  for(int i = 0;i < size;i++)
  {
    cout<<a[i]<<", ";
  }
  cout<<endl;
}

void bubbleSort(int a[],int size)
{
  for(int i = size-1;i > 0;i--)
  {
    for(int j = 0;j < i;j++)
    if(a[j] > a[j+1])
    {
      swap(a+j,a+j+1);
    }
  }
  print(a,size);
}

int main()
{
  int a[70] = {10,7,5,3,1,9,6,8,2,0,53,56,46,7,87,44,66,55,55,22,55,97,75,45,45,45,45,76,98,56,45,33,33,33,12,9,8,7654,43,3,4,4,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6,6,77,6,7},size = 61;
  while(1){
  print(a,size);
  bubbleSort(a,size);
  }
  return 0;
}
