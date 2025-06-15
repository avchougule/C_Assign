//8)Write a c program which produces its own source code as its output. 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *program[] = {
    "#include <stdio.h>",
    "#include <stdlib.h>",
    "#include <string.h>",
    "",
    "char *program[] = {",
    "};",
    "",
    "int main() {",
    "    int i;",
    "    for (i = 0; i < 5; i++) {",
    "        printf(\"%s\\n\", program[i]);",
    "    }",
    "    for (i = 0; i < 9; i++) {",
    "        printf(\"    \\\"%s\\\",\\n\", program[i]);",
    "    }",
    "    for (i = 5; i < 9; i++) {",
    "        printf(\"    \\\"%s\\\",\\n\", program[i]);",
    "    }",
    "    for (i = 9; i < 20; i++) {",
    "        printf(\"    \\\"%s\\\",\\n\", program[i]);",
    "    }",
    "    for (i = 20; i < 24; i++) {",
    "        printf(\"    \\\"%s\\\",\\n\", program[i]);",
    "    }",
    "    for (i = 9; i < 24; i++) {",
    "        printf(\"    \\\"%s\\\",\\n\", program[i]);",
    "    }",
    "    return 0;",
    "}"
};

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%s\n", program[i]);
    }
    for (i = 0; i < 9; i++) {
        printf("    \"%s\",\n", program[i]);
    }
    for (i = 5; i < 9; i++) {
        printf("    \"%s\",\n", program[i]);
    }
    for (i = 9; i < 20; i++) {
        printf("    \"%s\",\n", program[i]);
    }
    for (i = 20; i < 24; i++) {
        printf("    \"%s\",\n", program[i]);
    }
    for (i = 9; i < 24; i++) {
        printf("    \"%s\",\n", program[i]);
    }
    return 0;
}


