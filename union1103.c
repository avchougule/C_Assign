//3)Demonstrate use of union and find out size of union variable and the attributes from union.

#include <stdio.h>
union student
{
	int id;
	char name[30];
	float marks;
};
int main() 
{
	int i;
	union student st1; 
		
	//sizeof
	printf("The size of student union is %d \n", sizeof(st1));
	
	printf("Please Enter data for Student 1 : \n");
	printf("Student 1 Id : ");
	scanf("%d", &st1.id);
	printf("Student 1 Name : ");
	scanf("%s", st1.name);
	printf("Student 1 Marks : ");
	scanf("%f", &st1.marks);
printf("Student Data  : \n");
	printf("Student 1 :  %s \t %f \n", st1.id , st1.name, st1.marks);
	printf("Student 1 :  %d \n", st1.id);
}

