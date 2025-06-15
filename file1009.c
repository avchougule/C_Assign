//9)Write a program to remove spaces from a File and store the contents without space in a new file.           

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp_in, *fp_out;
    char c;

    fp_in = fopen("input.txt", "r");
    if (fp_in == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

    fp_out = fopen("output.txt", "w");
    if (fp_out == NULL) {
        printf("Error opening output file!\n");
        exit(1);
    }

    while ((c = fgetc(fp_in)) != EOF) {
        if (c != ' ') {
            fputc(c, fp_out);
        }
    }

    printf("Spaces removed successfully!\n");

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
