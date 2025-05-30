//WAP which calculate speed for time and distance.
#include <stdio.h>
void main()
{
 float distance, speed,time;

 printf("Enter the distance:\n");
 scanf("%f",&distance);
 printf("Enter the time:\n");
 scanf("%f",&time);

 speed=distance/time;
 printf("The speed is :%f",speed);


}