//WAP to multiply a 3*3 matrix. 

#include<stdio.h>
void main()
{
int a[10][10], b[10][10],c[10][10],sum=0;
int i,j,k;
printf(" \n enter the elemets in first matrix  : ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf(" \nenter the elements for 2nd matrix : ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf(" \n print first matrix ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d \t",a[i][j]);
}
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d \t",b[i][j]);
}
printf("\n");
}
//multiplication logic
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum = sum+ a[i][j]*b[i][j];
c[i][j]=sum;
}
}
printf(" \n print multiplication matrix ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\n%d \t",c[i][j]);
}
printf("\n");
}	
}  

