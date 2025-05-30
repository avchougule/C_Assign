//WAP to check whether a person is eligible for voting or not.
#include<stdio.h>
void main()
{
int age;
printf("Enter the age:\n");
scanf("%d",&age);
if(age>=18)
{
	printf("Voter is valid\n");
}
else{
	printf("Voteris not valid.");
}
}