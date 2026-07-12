#include <stdio.h>

int main() {
    int ch;
    FILE *ptr = fopen("3.txt", "r");
    FILE *ptr1 = fopen("3(1).txt", "w");

    while (1) {
        ch = fgetc(ptr);

        if (ch == EOF) {
            break;
        }

        fputc(ch, ptr1);
        fputc(ch, ptr1);
    }

    fclose(ptr);
    fclose(ptr1);

    return 0;
}