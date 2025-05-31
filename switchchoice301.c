/*WAP using following menus-
 Choice-1: Accept number and find out square and cube.
 Choice-2: Check whether the given year is LEAP or not.
 If user enters wrong choice appropriate message should get displayed.*/
#include<stdio.h>
void main()
{
 int a,square,cube,year,ch;
 printf("Enter the choice--\n1. square and cube \n2. Leap year \n");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
   printf("Enter the number:\n");
   scanf("%d",&a);
   square=a*a;
   cube=a*a*a;
   printf("square is = %d \n Cube is = %d",square,cube);
   break;
 case 2:
   printf("Enter the year:\n");
   scanf("%d",&year);
   if ((year%4==0)&&(year%400==0 || year%100!=0)){
   	 printf("Leaf year\n");}
   else{
   	printf("Not leaf year\n");}
  break;

  deault:
  printf("Enter valid input"); 
  break;
   
 }

}