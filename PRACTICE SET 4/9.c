#include<stdio.h>
int main(){
    int n;
    int i=1;
    int fact = 1;
    printf("enter number to find factorial: ");
    scanf("%d",&n);
    while (i<=n)
    {
        fact *= i;
        i++;
    }
    printf("factorial of %d: %d",n,fact);
    return 0;    
}