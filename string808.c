/*8)WAP to reverse the sentence or string without using library function.
for example
“hi all”
reverse 1: “all hi”
reverse 2: “lla ih”	*/

#include<stdio.h>
void main()
{
	char str[8];
	int i,j;
	printf("Ente Your String 8 charchter: ");
	for(i=0;i<8;i++)
	{
		scanf("%c",&str[i]);
	}
	printf("Reverse String is : ");
	for(i=8;i>=0;i--)
	{
		printf("%c",str[i]);
	}	
}