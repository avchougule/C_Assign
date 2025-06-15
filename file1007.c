//7)Write a Program to Count No of Lines, Blank Lines, Comments in a para in a file.

#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1000

int main()
{
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    int total_lines = 0, blank_lines = 0, comment_lines = 0, in_comment = 0;

    fp = fopen("input.txt", "r");  // open the file in read mode

    if (fp == NULL) {  // check if the file was opened successfully
        printf("Failed to open file.\n");
        exit(1);
    }

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL) {
        total_lines++;

        // check if the line is a comment
        if (line[0] == '/' && line[1] == '/') {
            comment_lines++;
        } else if (line[0] == '/' && line[1] == '*') {
            comment_lines++;
            in_comment = 1;
        } else if (in_comment == 1) {
            comment_lines++;

            if (line[strlen(line)-2] == '*' && line[strlen(line)-1] == '/') {
                in_comment = 0;
            }
        }

        // check if the line is blank
        int i, is_blank = 1;
        for (i = 0; i < strlen(line); i++) {
            if (!isspace(line[i])) {
                is_blank = 0;
                break;
            }
        }

        if (is_blank == 1) {
            blank_lines++;
        }
    }

    printf("Total lines: %d\n", total_lines);
    printf("Blank lines: %d\n", blank_lines);
    printf("Comment lines: %d\n", comment_lines);

    fclose(fp);  // close the file
    return 0;
}

