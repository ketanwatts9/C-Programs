// #include <stdio.h>
// int main(){
//     int i;
//     int sum = 0;
//     for (i = 1; i <= 10; i++)
//     {
//         sum += i;
//     }
//     printf("sum of first 10 numbers: %d",sum);
//     return 0;
// }

#include <stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    do
    {
        sum += i;
        i++;
    } while (i<=10);
    
    printf("sum of first 10 numbers: %d",sum);
    return 0;
}