//PROGRAM TO ACCESS AN ARRAY OF INTEGERS USING POINTERS.
#include<stdio.h>
int main()
{
	int data[5];
	printf("Enter 5 Elements: ");
	for(int i=0;i<5;++i)
		scanf("%d",(data+i));
	printf("You entered:- \n");
	for(int i=0;i<5;++i)
		printf("%d ",*(data+i));
	return 0;
}
