#include<stdio.h>

void print(int a[],int size)
{
  for(int i = 0;i < size;i++)
  {
    printf("%d, ",a[i]);
  }
  printf("\n");
}
void partition(int *a,int l,int h){
  int pivot = a[l];
  while (i < j)
  {
    if(a[i])
  }
  
}
void quickSort(int a[],int size,int *comp,int *exch)
{
  int item,i,j,list[size];
  for(i = 1;i < size;i++)
  {
    item = a[i];
    for(j = i-1;j >= 0 && a[j] > item;j--)
      a[j+1] = a[j];
    a[j+1] = item;
  }
}

int main()
{
  int a[10] = {10,7,5,3,1,9,6,8,2,0},size = 10;
  printf("Given Array: ");
  print(a,size);
  insertSort(&a,size,&comp,&exch);
  printf("Result Array: ");
  print(a,size);
  printf("Total no of comparison in insertion sort = %d\n",comp);
  printf("Total no of exchanges in insertion sort = %d\n",exch);
  return 0;
}