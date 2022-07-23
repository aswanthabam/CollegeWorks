#include<stdio.h>
int main()
{
    int a[10][10], m, n, i, j,f=0;
    printf("enter the number of rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("enter the array elements: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }        
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
               if(a[i][j]!=1)
               f=1;
                }
            else
            {
                if(a[i][j]!=0)
                f=1;
            }
        }
    }
    if(f==0)
        printf("matrix is identity matrix\n");
    else
        printf("matrix is not an identity matrix\n");
    return 0;
}
