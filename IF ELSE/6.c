#include <stdio.h>
int main(){
    int unit;
    float unit_amount,bill;

    printf("enter units: ");
    scanf("%d",&unit);

    if(unit>0 && unit<=200){
        unit_amount = unit*2;
    }
    else if(unit>200 && unit<=400){
        unit_amount = 200*2 + (unit-200)*3; 
    }
    else if(unit>400 && unit<=600){
        unit_amount = 200*2 + 200*3 + (unit-400)*4; 
    }
    else{
        unit_amount = 200*2 + 200*3 + 200*4 + (unit-600)*5;
    }

    bill = (unit_amount*0.1)+unit_amount;
    printf("total bill: %.2f",bill);
}