#include <stdio.h>
int main(){
    float income,tax,amount;

    printf("Enter income: ");
    scanf("%f",&income);
    
    if(income<250000){
        tax = 0;
    }
    else if(income>=250000 && income<500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>=500000 && income<1000000){
        tax = 0.2 * (income - 500000) + 0.05 * 250000;
    }
    else if(income>=1000000){
        tax = 0.05 * 250000 + 500000*0.20 + (income-1000000);
    }

    amount = income + tax;
    printf("Total income: %.2f",amount);
    return 0;
}