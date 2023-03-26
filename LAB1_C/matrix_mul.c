// PROGRAM FOR MATRIX MULTIPLICATION.

#include<stdio.h>
int main(){
    int m, n, p, q,a[10][10], b[10][10],res[10][10];
    
    printf("Enter the order of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the order of second matrix: ");
    scanf("%d %d", &p, &q);
    
    if(n!=p){
        printf("Matrix multiplication not possible!\n");
    }
    else{
        printf("Enter the elements of Matrix-A:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        
        printf("Enter the elements of Matrix-B:\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }
        
        for(int i=0;i<m;i++){
        	for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }  
        }
        
        printf("The product of the two matrices is:-\n");
        
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}