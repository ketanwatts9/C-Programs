#include <stdio.h>
float converter(float);
float converter(float celc){
    float fah = 1.8*celc+32;
    printf("%.2fC in %.2fF",celc,fah);
    return fah;
}
int main(){
    float C;
    scanf("%f",&C);
    converter(C);
    return 0;
}