#include<stdio.h>
void main()
{
float per;
printf("Enter the percentage:\n");
scanf("%f",&per);
if(per>=70)
{
	printf("Grade is A\n");
}
else if(per<70&&per>=60)
{
	printf("Grade is B+\n");
}
else if(per<60&&per>=45)
{
	printf("Grade is B\n");
}
else if(per<45&&per>=35)
{
	printf("Grade is C\n");
}
else{
	printf("Fail");
}
}