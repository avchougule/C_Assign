//5)WAP to copy one structure into another. Use concept of nested structures. 

#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char name[20];
	float salary;
	struct Doj
	{
		int dd;
		int mm;
		int yy;
	}d1;
};
void main()
{
	struct Employee e1;
	e1.id=1;
	strcpy(e1.name,"shraddha");
	e1.salary=25000;
	e1.d1.dd=02;
	e1.d1.mm=01;
	e1.d1.yy=2023;

	printf("%d\t %s\t %f\t %d-%d-%d\n",e1.id,e1.name,e1.salary,e1.d1.dd,e1.d1.mm,e1.d1.yy);
}

