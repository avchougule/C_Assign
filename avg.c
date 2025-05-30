//WAP to accept five subject marks and find out total and average of the marks
#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5;

printf("Enter the marks of subjects:\n");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

float avg= (s1+s2+s3+s4+s5)/5;
printf("\nThe average of all subject is: %f",avg);

}