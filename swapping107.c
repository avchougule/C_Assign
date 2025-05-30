#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter value of A and B:");
scanf("%d%d",&a,&b);

temp=a;
a=b;
b=temp;

printf("Values after swapping A and B are:%d,%d",a,b);



}