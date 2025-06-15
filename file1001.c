//1)Write a program to read name and marks of n number of students from user and store them in a file.

#include <stdio.h>
#include <stdlib.h>
void main()
{
	int num, i;
	char name[20];
	float marks;
   	FILE *fptr;
   	// Give appropriate file location , otherwise file will be created in same folder as the C program
   	// Modes : r - read , w - write , a - append
   	fptr = fopen("myfile.txt","w");

   	if(fptr == NULL)
  	{	
    	printf("Error in creating file !");   
      	exit(1);             
   	}
printf("Enter Data for 3 Students \n");
	for (i = 0 ; i < 3; i ++)
   	{
		printf("Enter Roll Num: ");
   		scanf("%d",&num);
   		printf("Enter Name: ");
   		scanf("%s",name);
		printf("Enter Marks: ");
   		scanf("%f",&marks);
   		
   		fprintf(fptr,"%d\t",num);
   		fprintf(fptr,"%s\t",name);
   		fprintf(fptr,"%f\n",marks);
   	}
   printf("Writing File Done , Closing File !\n");   
   fclose(fptr);
}  

