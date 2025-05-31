// d) Function with parameters with return value.
#include<stdio.h>
int volume(int,int);
int main()
{
	float a,b,vol;
	printf("Enter the radius of volume\n");
	scanf("%f",&a);
	printf("Enter the height of volume\n");
	scanf("%f",&b);
	vol=volume(a,b);
	printf("The volumeof cylinder is %f\n",vol );

}
int volume(int r, int h)
{
	
	return 3.14*r*r*h;
}