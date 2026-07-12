#include <stdio.h>
int main(){
    float r,h,area,vol;
    printf("enter radius:");
    scanf("%f",&r);
    if(r<10){
        area = 3.14*r*r;
        printf("area of circle is: %.2f",area);
    }
    else{
        printf("enter height: ");
        scanf("%f",&h);
        vol = 3.14*r*r*h;
        printf("volume of vylinder: %.2f",vol);
    }
    return 0;
}