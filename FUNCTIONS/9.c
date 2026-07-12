#include <stdio.h>
int rev(int);
int rev(int N){
    int rev = 0;
    while(N>0){
    int digit = N%10;
    rev = rev*10 + digit;
    N = N/10;
    }
    printf("reversed: %d",rev);
}
int main(){
    int n;
    scanf("%d",&n);
    rev(n);
    return 0;
}