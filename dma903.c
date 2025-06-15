/*3)Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* ptr,limit,i,sum; 
    printf("Enter limit of the array: ");
    scanf("%d", &limit);
    ptr = (int*)malloc(limit * sizeof(int));
    for (i = 0; i < limit; i++) {
        printf("Enter array elements %d: ", i + 1);
        scanf("%d", (ptr + i));
    }
    printf("\nArray elements are:\n");
    for (i = 0; i < limit; i++) {
        printf("%d\n", *(ptr + i));
    }
    sum = 0; 
    for (i = 0; i < limit; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sum);
    free(ptr); 
    return 0;
}
