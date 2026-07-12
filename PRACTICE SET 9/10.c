#include <stdio.h>

typedef struct date
{
    int mm;
    int dd;
    int yyyy;
}d;

int compare(d d1,d d2)
{
    if(d1.yyyy > d2.yyyy) return 1;
    else return 0;
};

int main(){
    d d1 = {12,23,1231};
    d d2 = {23,12,1211};
    printf("%d",compare(d1,d2));
    return 0;
}