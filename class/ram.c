#include<stdio.h>
void main()
{
 int n=5,i,j,k;
 for(i=0; i<2*n-1;i++)
 {
  int comp;
  if(i<n)
  	comp=2*(n-i)-1;
  else
  	comp=2*(i-n+1)+1;

  for(j=0; j<comp;j++)
  	printf("");

  for(int k=0; k<2*n-comp;k++)
  	printf("%c",k+'a' );
  printf("\n");
 }

}