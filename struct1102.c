//2)Create a structure Employee. Accept data for 5 employees and display it.

#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	float salary;
};

void main()
{
	int i=1;
	struct Employee e1[5];
	printf("Get the details of Every Emmployee:\n");
	for(i=1;i<=3;i++)
	{
		printf("%d Id=",i);
		scanf("%d",&e1[i].id);
		printf("%d Name=",i);
		scanf("%s",&e1[i].name);
		printf("%d Salary=",i);
		scanf("%f",&e1[i].salary);
	}	
	printf("Display the details of Every Emmployee\n");
	for(i=1;i<=3;i++)
	{
		printf("%d %d",i,e1[i].id);
		printf("  %s",e1[i].name);
		printf("  %f",e1[i].salary);
		printf("\n");
	}	
	
}


