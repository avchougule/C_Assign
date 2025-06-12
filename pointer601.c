/*Write a program that declares a double, an int, and char variables. Next declare and initialize a pointer to each of the three variables.Your program should then print the address of, and value stored in.*/

#include<stdio.h>
void main()
{
	int a=5;
	int *ptr1;
	ptr1=&a;

	printf("\nValue of a is %d",a);
	printf("\nAddress of a is %u",&a);
	printf("\nValue of ptr1 is %d",ptr1);

	double b=234;
	double *ptr2;
	ptr2=&b;
	printf("\n\nValue of b is %lf",b);
	printf("\nAddress of b is %u",&b);
	printf("\nValue of ptr2 is %d",ptr2);

	char ch='r';
	char *ptr3;
	ptr3=&ch;
	printf("\n\nValue of ch is %c",ch);
	printf("\nAddress of ch is %u",&ch);
	printf("\nValue of ptr3 is %d",ptr3);
} 
