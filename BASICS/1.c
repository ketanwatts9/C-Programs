#include <stdio.h>
int main(){
    float lprice,mprice,bprice;
    float price,average;
    printf("enter laptop price: ");
    scanf("%f",&lprice);
    printf("enter mobile price: ");
    scanf("%f",&mprice);
    printf("enter book price: ");
    scanf("%f",&bprice);
    price = lprice+mprice+bprice;
    average = price/3;
    printf("Total price: %.2f\n",price);
    printf("average: %.2f",average);
    return 0;
}