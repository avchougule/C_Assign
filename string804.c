//4)Find a character(or sub-string) in a string without using library function. And print its ascii value.

#include <stdio.h>

int main() {
    char string[100];
    char search_char;
    int i, ascii_value = -1;

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter a character to search: ");
    scanf(" %c", &search_char);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == search_char) {
            ascii_value = search_char;
            break;
        }
    }

    if (ascii_value != -1) {
        printf("The ASCII value of '%c' is %d.\n", search_char, ascii_value);
    } else {
        printf("The character '%c' is not found in the string.\n", search_char);
    }

    return 0;
}