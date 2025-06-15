/*Given a 2D array, print it in spiral form.
I/p:
 1  2  3  4  5
 6  7  8  9 10
11 12 13 14 15
O/p:
1 2 3 4 5 10 15 14 13 12 11 6 7 8 9*/

#include<stdio.h>
void main()
{
int r,c;
printf("\nInput the number of rows : ");
scanf("%d",&r);
printf("\nInput the number of columns : ");
scanf("%d",&c);
int arr[r][c];
int i,j;
printf("\nInput the matrix \n");
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
scanf("%d",&arr[i][j]);
}	
}
printf("\nThe Matrix is \n");
for(i = 0; i < r; i++)
{
for(j = 0; j < c; j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
printf("\nThe Spiral Matrix is \n");
int k = 0, l = 0;
while(k < r && l < c)
{
// first row ... from left to right .. 0th to last column
for(i = l; i < c; i++)
{
printf("%d\t",arr[k][i]);
}
k++;
// last column .. top to down ... 1st row to last row 
for(i = k; i < r; i++)
{
printf("%d\t",arr[i][c-1]);
}
c--;
// last row .. from right to left
if(k < r)
{
for(i = c - 1; i >= l; i--)
{
printf("%d\t",arr[r-1][i]);
}
r--;
}
// first column .. from bottom to top
if(l < c)
{
for(i = r - 1; i >= k; i--)
{
printf("%d\t",arr[i][l]);
}
l++;
}
}
}

