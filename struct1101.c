//1)Create a structure Student. Create array of 10 students using MACRO and display data in tabular form.

#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[20];
	float per;
}s1[5];
void main()
{
	//struct Student s;
	int i;
	printf("Enter the Details of Students");
	for(i=0;i<3;i++)
	{
		printf("%d rollno=",i);
		scanf("%d",&s1[i].rollno);
		printf("%d Name=",i);
		scanf("%s",&s1[i].name);
		printf("%d Percentage=",i);
		scanf("%f",&s1[i].per);
	}
	printf("Displaying the information of student :\n");
	for(i=0;i<3;i++)
	{
		printf("\t%d",s1[i].rollno);
		printf("\t%s",s1[i].name);
		printf("\t%f",s1[i].per);
		printf("\n");
	}
}

