#include <stdio.h>
int area(int *a,int *b){
    return *a * *b;
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int Area = area(&a,&b);
    printf("%d",Area);
}