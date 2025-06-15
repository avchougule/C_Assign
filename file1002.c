/*2)Write a program to read name and marks of n number of students from user and store them in a
file. If the file previously exits, add the information of n students.*/

#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i,n,m;
	char name[30];
	fp=fopen("f2.txt","w");
	printf("Enter the count of student :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the name of %d student :",i);
		scanf("%s",name);
		printf("Enter the marks od %d student :",i);
		scanf("%d",&m);
		fprintf(fp,"%s\t%d",name,m);
	}
	
	fclose(fp);
	fp=fprintf("f2.txt","r");
} 

