#include <stdio.h>

int main() {
    FILE *file = fopen(__FILE__, "r");
    if (file == NULL) {
        printf("cannot open source file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
