#include <stdio.h>
int dototal(int,int,int);
float perc(int);
int dototal(int a,int b,int c){
    return a+b+c;
}
float perc(int total){
    float percent = total/3.0;
    return percent;
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int total = dototal(a,b,c);
    float percentage = perc(total);
    printf("Percentage: %.2f",percentage);
}