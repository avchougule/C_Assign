//8)Nest Date structure into Employee as to display joining date of employee.

#include<stdio.h>  
struct date   
{  
    int dd;
    int mm;
    int yy;  
};  
struct employee  
{  
    char name[20];  
    struct date d;  
};  
void main ()  
{  
    struct employee e;  
    printf("Enter employee information\n");  
    scanf("%s %d %d %d",e.name,&e.d.dd, &e.d.mm,&e.d.yy);  
    printf("Printing the employee information....\n");  
 printf("\nName : %s \nDate of joining : %d/%d/%d\n", e.name,e.d.dd,e.d.mm, e.d.yy);
}  

