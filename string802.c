//2)WAP to concatenate two strings without using library function.

#include<stdio.h>
void main()
{
char str1[90]="program";
char str2[90]=" is aweosome";
int length=0,i;
while(str1[length]!='\0')
{
length++;
}
for(i=0; str2[i]!='\0';i++,length++)
{
str1[length]=str2[i];
}
str1[length]='\0';
for(i=0;str1[i]!='\0';i++)
{
printf("%c",str1[i]);
}	
}