#include<stdio.h>
int main()
{
    int data[5];
    printf("Enter 5 Elements:\n");
    for(int i=0;i<5;++i)
        scanf("%d",(data+i));
    printf("You entered: \n");
    for(int i=0;i<5;++i)
        printf("%d\n",*(data+i));
    return 0;
}
