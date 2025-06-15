/*WAP to check whether two matrtices are identical or not.*/

#include<stdio.h>
void main()
{
int i,j,k,arr1[2][2],arr2[2][2],flag=0,arr3[2][2];
printf("Enter the elements of matrix 1 :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&arr1[i][j]);
}		
}	
printf("Enter the elements of matrix 2 :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&arr2[i][j]);
}		
}
printf("matrix 1 :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d  ",arr1[i][j]);
}
printf("\n");
}
printf("matrix 2 :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d  ",arr2[i][j]);
}
printf("\n");
} 
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{ 
arr3[2][2]=0;
arr3[i][j]=arr1[i][j]*arr2[i][j];
}
}
printf("New matrice is : \n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{ 
printf("%d  ",arr3[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{			
if(i==j && arr3[i][j]!=1)
{
flag=1;
break;
}
else if(i!=j && arr3[i][j]!=0)
{
flag=1;
break;
}
}		
}
if(flag==0)
printf("matrix is identical");
else
printf("matrix is not identical");	
}

