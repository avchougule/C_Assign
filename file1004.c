//4)Write to a text file using fprintf() 

#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("f1.txt","w");
	fprintf(fp,"Hiii this is fprintf function.....");
	fclose(fp);
}

