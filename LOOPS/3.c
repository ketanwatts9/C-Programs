#include <stdio.h>
int main(){
    int n;
    int i = 1;
    printf("enter n: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d -> %d %d\n",i,i*i,i*i*i);
        i++;
    }
    return 0;
}