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

void bubbleSort(int *a,int size,int *comp,int *exch)
{
  for(int i = size-1;i > 0;i--)
  {
    for(int j = 0;j < i;j++)
    if(*(a + j) > *(a + j + 1))
    {
      (*comp)++;
      (*exch)++;
      swap(a+j,a+j+1);
    }
  }
}

int main()
{
  int a[70] = {10,7,5,3,1,9,6},size = 7,comp=0,exch=0;
  printf("Given Array: ");
  print(a,size);
  bubbleSort(&a,size,&comp,&exch);
  printf("Result Array: ");
  print(a,size);
  printf("Total no of comparison in bubble sort = %d\n",comp);

  printf("Total no of exchanges in bubble sort = %d\n",exch);
  return 0;
}
