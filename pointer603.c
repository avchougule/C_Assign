/*Demonstrate pointer arithmetic by assigning pointer “ptr” to variable “a” which is having value as 100 in it.Perform increment operation on pointer ptr like ptr=ptr+2 and
display which address that pointer ptr hold.*/

#include<stdio.h>
void main()
{
	int a=100;
	int *ptr;
	ptr=&a;

	printf("\nValue of vairable a is : %d",a);
	printf("\nAddress of pointer a is %u",&a);
	printf("\nValue of pointer ptr is : %d",ptr);

	ptr=ptr+2;
	printf("\n\nAfter increment Address of ptr is %u",ptr);
}  