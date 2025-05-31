// c) Function without parameter with return value.
#include<stdio.h>
int volume();
int main()
{
	int vol;
	//function  calling
	vol=volume();
	printf("The volumeof cylinder is %d\n",vol );

}
int volume()//function defi
{
	int a,b;
	printf("Enter the radius of volume\n");
	scanf("%d",&a);
	printf("Enter the height of volume\n");
	scanf("%d",&b);
	
	return 3.14*a*a*b;
}