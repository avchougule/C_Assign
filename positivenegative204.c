//WAP to check whether Number is positive or negative or ZERO
#include<stdio.h>
void main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
if(num>0)
{
	printf("Number is positive\n");
}
else if(num<0)
{
	printf("Number is negative\n");
}
else
{
	printf("Number is zero\n");
}
}