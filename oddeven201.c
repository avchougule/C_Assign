//WAP to check whether a number is even or odd
#include<stdio.h>
void main()
{
	int no,i;
	printf("Enter the number:\n");
	scanf("%d",&no);

	i= no%2;
	if(i==0)
	{
	printf("This is even number\n");
	}
	else{
		printf("This is not even number");
	}
}