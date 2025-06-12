//WAP to check whether a number is palindrome
#include<stdio.h>
#include<math.h>
int palindrome(int);
int main()
{
	int n;
	printf("Enter number to check palindrome");
	scanf("%d",&n);
	palindrome(n);
}
int palindrome(int n)
{
	int temp,r,sum=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp == sum)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	
return 0;
}