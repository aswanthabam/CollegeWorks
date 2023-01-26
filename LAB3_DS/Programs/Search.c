#include<stdio.h>
int linear(int a[], int n,int e,int *com){
  *com = 0;
  for(int i = 0; i < e;i++) {
    (*com) ++;
    if(a[i] == e) {
      return i;
    }else continue;
  }
  return -1;
}
int binary(int a[],int n,int e,int *com)
{
    int mid, l=0, r=n;
    *com = 0;
    do{
        mid=(r+l)/2;
        (*com)++;
        if(a[mid]==e)
        {
            return mid;
        }
        else if(e<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }while(l<=r);
    return -1;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int data, x,comp;
    printf("Enter the element to check: ");
    scanf("%d",&data);
    printf("\nUsing binary search:-\n");
    x=binary(a,10,data,&comp);
    if(x==-1)
        printf("Element not found in the array\n");
    else
        printf("Element is found at index %d\n",x);
    printf("Total no of comparison in binary search = %d\n",comp);
    printf("\nUsing sequential search:-\n");
    x = linear(a,10,data,&comp);
    if(x==-1)
        printf("Element not found in the array\n");
    else
        printf("Element is found at index %d\n",x);
    printf("Total no of comparison in linear search = %d\n",comp);
    return 0;
}
