#include <stdio.h>
int main(){
    float r,h,vol;
    printf("enter radius: ");
    scanf("%f",&r);
    printf("enter height: ");
    scanf("%f",&h);
    vol = 3.14*r*r*h/3;
    printf("volume of cone: %.2f",vol);
    return 0;
}