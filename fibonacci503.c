//WAP to print Fibonacci series.(also using recursion) 
#include<stdio.h>
float fibonacci(int);
int main()
{
	int n;
	int n1=0,n2=1;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("fibonacci series is:\n");
	printf("%d\n%d\n",n1,n2);
	fibonacci(n);
}
float fibonacci(int n)
{
	int n1=0,n2=1,n3,i;
	for(i=2;i<n;++i)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}