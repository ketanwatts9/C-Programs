#include <stdio.h>
#include <stdlib.h>

struct HEIGHT
{
int feet;
int inch;
};

int main()
{
    struct HEIGHT H[2];

    for(int i = 0; i < 2; i++)
    {
        printf("Enter Feet of person %d: ", i + 1);
        scanf("%d", &H[i].feet);

        printf("Enter inch of person %d: ", i + 1);
        scanf("%d", &H[i].inch);
    }

    int h1 = H[0].feet * 12 + H[0].inch;
    int h2 = H[1].feet * 12 + H[1].inch;

    int diff = abs(h1 - h2);

    printf("Difference between heights = %d feet %d inch",
           diff / 12,
           diff % 12);
           
    return 0;
}