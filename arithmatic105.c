#include <stdio.h>
void main()
{
	int a=10,b=20;
	float sum,sub,mult,div,rem;
	sum=a+b;
	printf("The sum of two integer:%f",sum);

	sub=b-a;
	printf("\nThe substraction of two integer:%f",sub);

	mult=a*b;
	printf("\nThe multiplication of two integer:%f",mult);

	div=b/a;
	printf("\nThe division of two integer:%f",div);

	rem=a%b;
	printf("\nThe reminder of two integer:%f",rem);
	}