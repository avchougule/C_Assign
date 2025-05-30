//WAP to find out perimeter and area of the Square and Rectangle
#include<stdio.h>
void main()
{
   float side, length, width;
    printf("Enter the side of square:");
    scanf("%f",&side);

    float perimeter_sq= 4*side;
    float area_sq= side*side; 
    printf("perimeter of square is %f \n Area of square %f",perimeter_sq,area_sq);

	printf("\nEnter the length and width of rectangle:");
    scanf("%f%f",&length,&width);

    float perimeter_rec=2*(length+width);
    float area_rec=length*width;
    printf("perimeter of rectangle %f \n Area of rectangle %f",perimeter_rec,area_rec);

}	