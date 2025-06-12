//WAP to check whether a number is Armstrong number
#include<stdio.h>
int armstrong(int);
int main()
{
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	if(armstrong(number)== 0)
		printf("%d is Armstrong number:",number);
	else
		printf("%d is not Armstrong number:",number);
	return 0;
}

int armstrong(int number)
{
int lastdigit=0,power=0,sum=0;
int n=number; //temporary variable
while(n!=0)
{
	lastdigit=n % 10;
	power=lastdigit*lastdigit*lastdigit;
	sum=sum+power;
	n=n/10;
}
if(sum == number)
	return 0;
else
	return 1;


}