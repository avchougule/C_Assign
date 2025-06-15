//4)Write a program to read and print the student details using structure and Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[30];
    int roll;
    float perc;
};
int main()
{
    struct student *s;
    s=(struct student*)malloc(1*sizeof(struct student));
     
    if(s==NULL)
    {
        printf("Insufficient Memory...\n");
        return 0;
    }
    printf("Enter name: ");
    gets(s->name);
    printf("Enter roll number: ");
    scanf("%d",&s->roll);
    printf("Enter percentage: ");
    scanf("%f",&s->perc);
     
    printf("\nEntered details are:\n");
    printf("Name: %s, Roll Number: %d, Percentage: %f\n",s->name,s->roll,s->perc);
    return 0;
}