#include <stdio.h>
void main()
{
	int num,sum=0,d;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%10;
		if(d%2==0)
		{
			sum=sum+d;
		}
		num=num/10;
	}
	printf("Sum of even digit %d",sum);
}