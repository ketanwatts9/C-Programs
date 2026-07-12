#include <stdio.h>

int main() {
    char name1[34], name2[34];
    int salary1, salary2;

    FILE *ptr = fopen("4.txt", "w");

    printf("Enter name 1: ");
    scanf("%s", name1);

    printf("Enter salary 1: ");
    scanf("%d", &salary1);

    printf("Enter name 2: ");
    scanf("%s", name2);

    printf("Enter salary 2: ");
    scanf("%d", &salary2);

    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);

    fclose(ptr);

    return 0;
}