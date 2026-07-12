#include <stdio.h>

struct date
{
    int mm;
    int dd;
    int yyyy;
};

int compare(struct date d1,struct date d2)
{
    if(d1.yyyy > d2.yyyy) return 1;
    else return 0;
};

int main(){
    struct date d1 = {12,23,1231};
    struct date d2 = {23,12,1211};
    printf("%d",compare(d1,d2));
    return 0;
}