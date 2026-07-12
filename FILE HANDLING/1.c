#include <stdio.h>

int main()
{
    char filename[34];

    printf("Enter File Name: ");
    scanf("%s", filename);

    FILE *ptr = fopen(filename, "r");

    if (ptr == NULL)
    {
        printf("File not found!");
        return 1;
    }

    int ch;
    int chars = 0, words = 0, lines = 0;

    while ((ch = fgetc(ptr)) != EOF)
    {
        chars++;

        if (ch == ' ' || ch == '\t' || ch == '\n')
            words++;

        if (ch == '\n')
            lines++;
    }

    fclose(ptr);

    printf("\nNo. of Chars : %d\n", chars);
    printf("No. of Words : %d\n", words + 1);
    printf("No. of Lines : %d\n", lines + 1);

    return 0;
}