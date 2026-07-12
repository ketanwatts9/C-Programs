#include <stdio.h>
float vol(float,float);
float vol(float r,float h){
    float Cyliner = 3.14*r*r*h;
    float cone = (3.14*r*r*h)/3;
    printf("volume of cylinder = %.2f\n",Cyliner);
    printf("volume of cone = %.2f",cone);
}
int main(){
    float r,h;
    scanf("%f",&r);
    scanf("%f",&h);
    vol(r,h);
    return 0;
}