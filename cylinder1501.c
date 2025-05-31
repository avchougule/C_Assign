// a) Function without parameters without return value.
#include<stdio.h>
int volume();
int main()
{
	
	volume();
	

}
int volume()
{
	int a,b;
	float vol;
	printf("Enter the radius of volume\n");
	scanf("%d",&a);
	printf("Enter the height of volume\n");
	scanf("%d",&b);
	vol=3.14*a*a*b;
	printf("The volumeof cylinder is %f\n",vol );
}