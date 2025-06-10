//WAP to print Fibonacci series.(also using recursion) 
#include<stdio.h>
float fibonacci(int);
void main()
{
	float fibo,n;
	int n1=0,n2=1;
	printf("Enter numberto calculate factorial:");
	scanf("%d",&n);
	printf("fibonacci series is:"\n);
	printf(%d %d,n1,n2);
	fibonacci(n);
}
float fibonacci(int n)
{
	int n1=0,n2=1,n3,i;
	for(i=2;i<n;++i)
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}