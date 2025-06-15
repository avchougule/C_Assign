//1)Write a program to create memory for int, char and float variable at run time.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *num;
	char *str;
	float *deci;
	str=(char*)malloc(1*sizeof(char)*1);
	num=(int*)malloc(sizeof(int)*1);	
	deci=(float*)malloc(sizeof(float));
	//d=(float*)calloc(4,sizeof(float));
printf("\nEnter the number for char getting mm block "); 
	scanf("%c",&str);

printf("\nEnter the number for int getting mm block ");
	scanf("%d",&num);
	
printf("\nEnter the number for float getting mm block ");
	scanf("%f",(deci+1));

	printf("\nint - %d",num);
	printf("\nchar - %c",str);	
	printf("\nfloat - %f",*(deci+1));

	free(num);
	free(str);
	free(deci);
}