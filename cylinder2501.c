// b) Function with parameter without return value.
#include<stdio.h>
int volume(int,int);
int main()
{
	int a,b;
	printf("Enter the radius of volume\n");
	scanf("%d",&a);
	printf("Enter the height of volume\n");
	scanf("%d",&b);
	volume(a,b);
}
int volume(int r, int h)
{
	
	float vol=3.14*r*r*h;
	printf("The volumeof cylinder is %f\n",vol );
}