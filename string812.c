//12)Write a program to count different types of characters in given string.

#include<stdio.h>
#include<string.h>
void main()
{
	 char string[]="C programming is best";
	 int i,n,size,count=0;
	 size=sizeof(string);
	 printf("size of string : %d",size);
	 for(i=0;i<size-1;i++)
	 {
	 	if(string[i]!=' ')
	 	{
	 		count++;
	 	}
	 }
	 printf("\nNumbers of chrachter in string is : %d",count);
}
