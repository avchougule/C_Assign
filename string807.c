/*7)WAP to count no of blank spaces in your paragraph without using string function and write it in your own function.*/

#include<stdio.h>
void main()
{
	char para[]="It means objects that can take on or assume many different forms.Polymorphism means that the same operations may behave differently on different classes.";
		int i,n,size,count=0; 
		size=sizeof(para);
		printf("size of para : %d",size);

		for(i=0;i<size;i++)
		{
			if(para[i]==' ')
			{
				count++;
				continue;
			}
		}
printf("\nspace in para is : %d",count);
} 
