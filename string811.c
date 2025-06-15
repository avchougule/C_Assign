/*11)WAP to transform string of lowercase character by replacing each letter with subsequent
character.*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Replace each lowercase letter with its subsequent character
        if (str[i] >= 'a' && str[i] < 'z') {
            str[i] = str[i] + 1;
        } else if (str[i] == 'z') {
            str[i] = 'a';
        }
    }

    printf("Transformed string: %s", str);

    return 0;
}