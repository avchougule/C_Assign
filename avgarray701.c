//WAP to calculate average marks of a 10 students.

#include<stdio.h>
void main()
{
	int marks[10],avg, total_marks=0 , i;
	printf("enter marks of 10 students \n : ");
	for(i=1;i<=10;i++)
	{
	scanf("%d",&marks[i]);
	total_marks=total_marks+marks[i];	
	}
	for(i=1;i<=10;i++)
	{
	printf(" \n marks of student %d =  %d  ",i,marks[i]);	
	}
	printf( " \n total sum of all students marks id %d : ",total_marks);
	avg=total_marks/10;
	printf("\n average of students marks is : %d ",avg);
} 
