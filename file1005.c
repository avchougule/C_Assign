//5)Write a Program to Append the Content of File at the end of Another.

#include <stdio.h>

int main() {
    FILE *source_file, *dest_file;
    char source_filename[100], dest_filename[100];
    char ch;

    // get the names of the source and destination files from the user
    printf("Enter name of source file: ");
    scanf("%s", source_filename);

    printf("Enter name of destination file: ");
    scanf("%s", dest_filename);

    // open the files in appropriate modes
    source_file = fopen(source_filename, "r");
    dest_file = fopen(dest_filename, "a");

    // check if the files were opened successfully
    if (source_file == NULL || dest_file == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    // copy the contents of the source file to the destination file
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    // close the files
    fclose(source_file);
    fclose(dest_file);

    printf("Contents appended successfully!\n");

    return 0;
}

