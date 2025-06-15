//9)Create a structure Employee. Pass it to a function by value. 

#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
void fun(struct Employee e);
int main() 
{
    struct Employee e;
    e.id=1;
    strcpy(e.name, "ABC");
    e.salary=15000;
    fun(e);
    return 0;
}
void fun(struct Employee e)
{
    printf(" Id is: %d \n", e.id);
    printf(" Name is: %s \n", e.name);
    printf(" Salary is: %f \n",e.salary);
} 
