#include <stdio.h>
void main()
{
int a,b,c,max;
printf("Enter values of A,B and C-");
scanf("%d%d%d",&a,&b,&c);
 
 max=(a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("Largest number between %d,%d,%d is-%d",a,b,c,max);

}