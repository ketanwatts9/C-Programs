#include <stdio.h>
int main(){
    int i=1;
    float sum = 0;
    int num;
    while (i<=10){
        printf("number-%d:",i);
        scanf("%d",&num);
        sum += num;
        i++;
    }
    printf("sum: %.2f\n",sum);
    printf("average: %.2f",sum/10);
    return 0;
}