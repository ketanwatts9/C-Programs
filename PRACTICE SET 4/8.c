#include <stdio.h>
int main(){
    int fact = 1;
    int n;
    printf("enter number to find factorial: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("factorial of %d: %d",n,fact);
    return 0;
}