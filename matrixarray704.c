//WAP to find transpose of matrix

#include<stdio.h>
void main()
 {
 int arr[3][4], trans[3][4];
 int i,j;
 printf("enter the elements in an array : ");
for(i=0;i<3;i++)
  {
   for(j=0;j<4;j++)
     {
	scanf("%d",&arr[i][j]);
     }
   } 
	  
  for(i=0;i<3;i++)
     {
       for(j=0;j<4;j++)
	 {
	   arr[i][j]=trans[j][i];
	   printf("%d",trans[i][j]);
	 }
	   printf(" ");
	}
 }
  
