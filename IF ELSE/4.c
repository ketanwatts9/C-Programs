#include <stdio.h>
int main(){
    int msg_number,call_number;
    float msg_bill,call_bill,bill,total_bill,tax;
    int rent = 100;

    printf("Enter number of messages sent: ");
    scanf("%d", &msg_number);

    printf("Enter number of calls made: ");
    scanf("%d", &call_number);

    if(msg_number<=50){
        msg_bill = msg_number*0.10;
    }
    else{
        msg_bill = msg_number*0.25;
    }

    if(call_number<=200){
        call_bill = call_number*0.75;
    }
    else{
        call_bill = call_number*0.95;
    }

    bill = call_bill + msg_bill +rent;

    if(bill<=1000){
        tax = bill*0.125;
    }
    else{
        tax = bill*0.225;
    }

    total_bill = bill + tax;
    printf("gross bill: %.2f",total_bill);
    return 0;
}