#include <stdio.h>
#include <stdlib.h>

struct CLOCK
{
    int hour;
    int minute;
};

int main()
{
    struct CLOCK c[2];

    for(int i = 0; i < 2; i++)
    {
        printf("Enter hour for clock %d: ", i + 1);
        scanf("%d", &c[i].hour);

        printf("Enter minute for clock %d: ", i + 1);
        scanf("%d", &c[i].minute);
    }

    int t1 = c[0].hour * 60 + c[0].minute;
    int t2 = c[1].hour * 60 + c[1].minute;

    int diff = abs(t1 - t2);

    printf("Difference between clocks = %d hour %d min",
           diff / 60,
           diff % 60);

    return 0;
}