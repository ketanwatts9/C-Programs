#include <stdio.h>
int main(){
    int n,digit;
    int sum = 0;
    printf("enter number: ");
    scanf("%d",&n);
    while(n>0){
    digit = n%10;
    sum += digit;
    n = n/10;}
    printf("sum of digits: %d",sum);
    return 0;
}