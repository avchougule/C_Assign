//WAP to sort array in ascending order.

#include<stdio.h>
void main()
 {
 int i,j,arr[5],temp;
 printf("\n enter elements in array : ");
 for(i=0;i<5;i++)
 {
 scanf("%d",&arr[i]);
 }
 for(i=0;i<5;i++)
 {	
 for(j=i+1;j<5;j++)
 {
 if(arr[i]>arr[j])
 {	
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;	
 }
}
}
 printf("\n array in ascending order : \n");
 for(i=0;i<5;i++)
 {
   printf("%d \t",arr[i]);	
 }
}

