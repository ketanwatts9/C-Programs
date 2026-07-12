#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter n: ");
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        for (j = 0; j<i; j++)
        {
            printf("%c ",j+65);
        }
        printf("\n");
    }
    return 0;
}