/*2. WAP to calculate factorial of a number using a function. (using recur)*/
#include<stdio.h>
int fact(int);
void main()
{
	int no,res=0;
	printf("Enter The number:\n");
	scanf("%d",&no);
	res=fact(no);
	printf("Factorial of given no %d",res);
}
int fact(no)
{
	if(no==1)
	{
		return 1;
	}
	return no*fact(no-1);
}