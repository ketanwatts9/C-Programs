#include <stdio.h>
void vol();
void vol(){
    float r,h,vol;
    printf("enter r:");
    scanf("%f",&r);
    printf("enter h:");
    scanf("%f",&h);
    vol = 3.14*r*r*h;
    printf("%.2f",vol);
}
int main(){
    vol();
    return 0;
}