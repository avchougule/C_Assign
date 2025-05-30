#include <stdio.h>
void main()
{
 int i,no;
 printf("Enter the number:");
 scanf("%d",&no);
 for(i=2;i<=no;i++)
 {
 	if(no%i==0)
 	break;
 }	
 	if(i==no)
 	{
 		printf("\nPrime number");
 	}
 	else
 	{
 		printf("\nNot Prime number");
 	}

}