#include <stdio.h>
int main(){
    int n,price;
    int i = 1;
    int total = 0;
    printf("enter products: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("enter price of %d product:",i);
        scanf("%d",&price);
        total += price;
        i++;
    }
    printf("total price : %d\n",total);
    printf("avg price : %d",total/n);
    return 0; 
}