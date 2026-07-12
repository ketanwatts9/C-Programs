#include <stdio.h>
int sum(int* a,int* b){
    return *a+*b;
}
int avg(int* a,int* b){
    int avg =(*a+*b)/2;
    return avg;
}
int main(){
    int x = 10;
    int y = 20;
    printf("%d\n",sum(&x,&y));
    printf("%d",avg(&x,&y));
}