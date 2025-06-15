//Write a C program to compute sum of diagonal elements of an array 

#include<stdio.h>
void main()
{
int arr[2][2],i,j,sum=0,sum1=0;
printf("Enter the matrice element :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("matrice is  :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
if(i==j)
{
sum=sum+arr[i][j];
}
else
{
sum1=sum1+arr[i][j];
}
}
}
printf("\nsum of diagonal element is :%d",sum);
printf("\nsum of non-diagonal element is :%d",sum1);
} 

