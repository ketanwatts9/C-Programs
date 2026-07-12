#include <stdio.h>
int main(){
    int n,i;
    printf("enter number: ");
    scanf("%d",&n);
    int is_prime = 1;
    if(n<=1){
        is_prime = 0;
    }
    for (i = 2; i < n; i++)
    {
        if(n%i==0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime){
        printf("%d is a prime number",n);
    }    
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}