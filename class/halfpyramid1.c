#include<stdio.h>
void main()
{

int i,j,row=0;
printf("Enter the number of rows:\n");
scanf("%d",&row);
for(i=row;i>=1;i--)
{
	for(j=1;j<=i;j++){
		printf("*");
	}
	printf("\n");
}

}