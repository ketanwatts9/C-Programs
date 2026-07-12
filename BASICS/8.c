#include <stdio.h>
int main(){
    int time,min,hour;
    printf("enter minutes: ");
    scanf("%d",&time);
    hour = time/60;
    min = time%60;
    printf("Valid time: %d hours %d minutes",hour,min);
    return 0; 
}