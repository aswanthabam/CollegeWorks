// One diamentional array implementation
#include<stdio.h>

int main() {
  // Declaration
  int arr[10];
  // Initialisation 
  int arr2[10] = {1,2,3,4,5,6,7,8,9,10};
  // Accepting input
  for(int i = 0;i < 10;i++) {
    scanf("%d",&arr[i]);
  }
  // Traversing 
  for(int i = 0;i < 10;i++) {
    printf("%d",arr[i]);
  }
  return 0;
}