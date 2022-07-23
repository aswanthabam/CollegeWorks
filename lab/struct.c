#include <stdio.h>
struct employee{
    char    name[30];
    int     empId;
    int   salary;
};
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name ?:");          
    scanf("%s",emp.name);
    printf("ID ?:");            
    scanf("%d",&emp.empId);
    printf("Salary ?:");        
    scanf("%d",&emp.salary); 
    printf("\nEntered detail is:");
    printf("Name: %s\n",emp.name);
    printf("Id: %d\n",emp.empId);
    printf("Salary: %d\n",emp.salary);
    return 0;
}
