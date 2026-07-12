#include <stdio.h>
int main(){
    int n = 8;
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        sum+=(n*i);        
    }
    printf("required sum: %d",sum);
    return 0;
}