#include <stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i = n; i>= 1; i--)
    {
        for (int j = 0; j<i; j++)
        {
            printf("%d ",j+65);
        }
        printf("\n");
    }
    return 0;
}