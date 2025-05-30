#include<stdio.h>
void main(){

int a,b;
printf("Enter value of A and B:");
scanf("%d%d",&a,&b);

a=a+b;
b=a-b;
a=a-b;
 printf("After swapping %d,%d:",a,b);


}