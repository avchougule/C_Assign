/*Accept three numbers from user and find out largest number among three and also find
out whether that three numbers are equal or not.(else if ladder)*/
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter A B and C:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
	printf("A is largest number.\n");
}
else if(b>a&&b>c)
{
	printf("B largest number.\n");
}
else if(a==b||b==c||a==c)
{
	printf("All values are equal\n");
}

else{
	printf("C largest number.");
}
}