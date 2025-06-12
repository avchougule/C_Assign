/*Demonstrate addition of two floating type numbers by using call by address.*/

#include<stdio.h>
void addition(float * , float *);
void main()
{
	float x,y;
	printf("Enter two number for addition");
	scanf("%f %f",&x,&y);
	addition(&x , &y);
}
void addition(float *a , float *b)
{
	float sum=0;
	sum=*a + *b;
	printf("sum is %f",sum);
}  
