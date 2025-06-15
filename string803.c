//3)WAP to convert upper-case string into lower-case and vice versa .Write your own functions for the same.

#include<stdio.h>
void main()
{
	char str[8];
	int i;
	printf("Enter your String in Lowercase : ");
	for(i=0;i<8;i++)
	{
		scanf("%c",&str[i]);
	}
	for(i=0;i<8;i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	printf("Uppercase String is : ");
	for(i=0;i<8;i++)
	{
		printf("%c",str[i]);
	}
}
