#include <stdio.h>
int main(){
    float p,r,t;
    printf("enter principal: ");
    scanf("%f",&p);
    printf("enter rate: ");
    scanf("%f",&r);
    printf("enter time: ");
    scanf("%f",&t);
    printf("simple interest: %.2f",(p*r*t)/100);
    return 0;
}