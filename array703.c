//WAP to find greatest and smallest number in an array. 

#include<stdio.h>
void main()
{
int min,max , n,i,arr[20],flag;
min=arr[0];
max=arr[0];
printf("enter  size  of array : ");
scanf("%d",&n);
printf("enter elements / numbers in array : ");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
		
}
   printf("Array is \n");
	
for(i=0;i<n;i++)
{
   printf("%d\t \n",arr[i]);
		
     if(arr[i]>max)
	{
	  max=arr[i];
	  //flag=1;
	 //break;
	}	
    if(arr[i]<min)
	{
	  min=arr[i];
	//flag=0;
	}
}
	printf("largest num is : %d \n",max);
	printf("smallest num is : %d",min);
}     

