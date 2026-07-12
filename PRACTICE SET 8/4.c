#include <stdio.h>

void slice(char str[], int m, int n) {
    int i = 0;

    while (m < n && str[m] != '\0') {
        str[i] = str[m];
        i++;
        m++;
    }

    str[i] = '\0';
}

int main() {
    char str[] = "harry";

    slice(str, 1, 4);

    printf("%s", str);

    return 0;
}