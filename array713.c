/*Write a program to print all the LEADERS in the array. (An element is LEADER if it is greater than all the elements to its right side.)*/

#include<stdio.h>
void main()
{
int i,j,n,arr[100],leader;
printf("enter the num\n");
scanf("%d",&n);
printf("enter the elements in array\n");
for(i=0;i<n;i++)
{
scanf("%d \n",arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]<arr[j])
{
leader=i=j;
break;
}
}
if(j==n)
{
printf("%d ",arr[i]);
}
}
}

