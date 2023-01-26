#include<stdio.h>

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
    printf("%d, ",a[i]);
  }
  printf("\n");
}

void bubbleSort(int a[],int size,int *comp,int *exch)
{
  for(int i = size-1;i > 0;i--)
  {
    for(int j = 0;j < i;j++)
    if(a[j] > a[j+1])
    {
      (*comp)++;
      (*exch)++;
      swap(a+j,a+j+1);
    }
  }
  print(a,size);
}

int main()
{
  int a[70] = {10,7,5,3,1,9,6,8,2,0,53,56,46,7,87,44,66,55,55,22,55,97,75,45,45,45,45,76,98,56,45,33,33,33,12,9,8,7654,43,3,4,4,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6,6,77,6,7},size = 61,comp=0,exch=0;
  
  bubbleSort(a,size,&comp,&exch);
  printf("Total no of comparison in bubble sort = %d\n",comp);

  printf("Total no of exchanges in bubble sort = %d\n",exch);
  return 0;
}
