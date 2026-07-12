#include <stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    int a[n], b[n], result[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Value at A[%d]:",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter Value at B[%d]:",i);
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i]+b[i];
    }
    printf("sum of two arrays is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("C[i]:%d\n",result[i]);
    }
    result;
}