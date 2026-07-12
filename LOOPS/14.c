#include <stdio.h>
int main(){
    int n;
    int i = 11;
    printf("enter n: ");
    scanf("%d",&n);
    int count = 0;
    while (i<=n)
    {
        int original = i;
        int reverse = 0;
        while (original>0)
        {
            int digit = original%10;
            reverse = reverse*10 + digit;
            original = original/10;
        }
        if(reverse == i){
            printf("Palindrome : %d\n",i);
            count++;}
        i++;
    }
    printf("palindrome numbers found: %d",count);
    return 0;
}