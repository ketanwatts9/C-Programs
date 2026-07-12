#include <stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int digit;
    int reverse = 0;
    int original = n;
    do
    {
        digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
    } while (n>0);
    if(original==reverse){
        printf("its palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}