/*Command line program to find area of triangle.*/
#include<stdio.h>
void main()
{

float base,height,area;

printf("Enter the base and height\n");
scanf("%f%f",&base,&height);

area=base*height;
printf("Area of triangle is:%f",area);

}