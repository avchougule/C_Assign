//9)WAP to show all possible library function for reading and writing String.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int len;

    // Reading strings from user input
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    fgets(str2, 100, stdin);
    printf("Enter string 3: ");
    gets(str3);

    // Writing strings to console
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("String 3: %s\n", str3);

    // String length
    len = strlen(str1);
    printf("Length of string 1: %d\n", len);

    // Copying strings
    strcpy(str2, str1);
    printf("String 2 after copying from string 1: %s\n", str2);

    // Concatenating strings
    strcat(str1, str3);
    printf("String 1 after concatenating with string 3: %s\n", str1);

    return 0;
}
