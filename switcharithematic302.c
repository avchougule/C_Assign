/*WAP using switch case for arithmetic operation on two numbers, if user enters an operator as
choice, the appropriate operation should perform.
 If user enters wrong choice appropriate message should get displayed.
 i.e. + is for addition
 - is for subtractio*/
#include<stdio.h>
void main()
{
	int num1=10,num2=20;
	char ch;
	printf("Enter your choice= +, -, *, /  \n");
	scanf("%c",&ch);

	switch(ch)
	{
	case '+':printf("Addition of two number is:%d\n",num1+num2 );	
		break;

    case '-':printf("Substraction of two number is:%d\n",num2-num1 );	
		break;

    case '*':printf("Multiplication of two number is:%d\n",num1*num2 );	
		break;

    case '/':printf("Division of two number is:%d\n",num2/num1 );	
		break;

	default:	
       printf("Enter Valid case");
       break;
	}

}