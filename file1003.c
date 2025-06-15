//3)Write a program to write all the members of an array of structures to a file using fprintf(). Read the array from the file and display on the screen. 

#include <stdio.h>

struct person {
    char name[50];
    int age;
};

int main() {
    struct person people[3] = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    // Writing the array to a file
    FILE *fp = fopen("people.txt", "w");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp, "%s %d\n", people[i].name, people[i].age);
    }

    fclose(fp);

    // Reading the array from the file
    fp = fopen("people.txt", "r");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    printf("People:\n");
    for (int i = 0; i < 3; i++) {
        fscanf(fp, "%s %d", people[i].name, &people[i].age);
        printf("%s (%d)\n", people[i].name, people[i].age);
    }

    fclose(fp);

    return 0;
}


