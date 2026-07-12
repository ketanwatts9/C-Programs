#include <stdio.h>
int main(){
    int n = 10;
    int i = 1;
    int sum = 0;
    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("sum of first 10 numbers: %d",sum);
    return 0;
}