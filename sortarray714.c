//Sort array using bubble sort

#include <stdio.h>
void main()
{
int arr[5];
int i,j,k, temp;
// Read Array
printf("Enter Elements of Array : \n");
for (i = 0 ; i < 5 ; i++)
scanf("%d", &arr[i]);
// Bubble Sort
for (i = 0; i < 4; i++)     
{
// Last i elements are already in place  
for (j = 0; j < 5-i-1 ;j++)
{
if (arr[j] > arr[j+1])
{
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1]= temp;
}
}
printf("\nPass %d :\n", i);
for (k=0; k < 5; k++)
printf("%d ", arr[k]);
}
// Print Sorted Array
printf("\n\nFinal Sorted Array : \n");
for (i=0; i < 5; i++)
printf("%d ", arr[i]);		
}
