/*Write a program to search particular value in an array and return the index number where it is located.*/

#include<stdio.h>
void main()
{
int i,size=5,flag=0;
int A[5],num;
printf("please enter size of array ele: ");
scanf("%d",&size);
for(i=0;i<size;i++)
{
printf("enter elements in array %d  :",i);
scanf("%d",&A[i]);
}
printf(" enter the number wich u want to search : ");
scanf("%d",&num);
//printf("Array is \n");
for(i=0;i<size;i++)
{
//printf("%d\t \n",A[i]);
if(A[i]==num)
{
printf(" element found at %d", i);
flag=1;
break;
}
}
if(flag==0)
printf(" not foundd!!");	
}

