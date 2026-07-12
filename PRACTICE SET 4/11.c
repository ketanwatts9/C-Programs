// #include <stdio.h>
// int main(){
//     int n;
//     int i=2;
//     printf("enter number: ");
//     scanf("%d",&n);
//     int is_prime = 1;
//     if(n<=1){
//         is_prime = 0;
//     }
//     while (i<n)
//     {
//         if(n%i==0){
//             is_prime = 0;
//             break;
//         }
//         i++;
//     }
//     if(is_prime){
//         printf("%d is a prime number",n);
//     }
//     else{
//         printf("%d is not a prime number",n);
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    int i = 2;
    int is_prime = 1;
    printf("enter number: ");
    scanf("%d",&n);
    if(n<=1){
        is_prime = 0;
    }
    else{
        do
    {
        if(n%i==0){
            is_prime = 0;
            break;
        }
        i++;
    } while (i<n);
}
    if(is_prime){
        printf("%d is a prime number",n);
    }    
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}