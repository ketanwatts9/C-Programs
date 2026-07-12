#include <stdio.h>
int main(){
    int n,fdigit,ldigit,sum;
    printf("Enter number: ");
    scanf("%d",&n);
    fdigit = (n/100000)%10;
    ldigit = n%10;
    sum = fdigit+ldigit;
    printf("sum: %d",sum);
    return 0;
}