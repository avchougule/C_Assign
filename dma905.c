//5)Write a program to read and print the N student details using structure and Dynamic Memory Allocation.


#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n, i;
    struct student *s;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    s = (struct student*) malloc(n * sizeof(struct student)); // allocate memory for n students

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Enter name: ");
        scanf("%s", (s+i)->name);
        printf("Enter age: ");
        scanf("%d", &(s+i)->age);
        printf("Enter marks: ");
        scanf("%f", &(s+i)->marks);
    }

    printf("\nDetails of all students:\n");
    for (i = 0; i < n; i++) {
        printf("\nDetails of student %d:\n", i+1);
        printf("Name: %s\n", (s+i)->name);
        printf("Age: %d\n", (s+i)->age);
        printf("Marks: %.2f\n", (s+i)->marks);
    }

    free(s); // free the dynamically allocated memory

    return 0;
}
