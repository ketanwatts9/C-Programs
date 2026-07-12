#include <stdio.h>
int main(){
    float s,r,sarea,carea;
    printf("enter side of square: ");
    scanf("%f",&s);
    printf("enter radius of circle: ");
    scanf("%f",&r);
    sarea = s*s;
    carea = 3.14*r*r;
    printf("area of square is : %.2f\n",sarea);
    printf("area of circle is : %.2f",carea);
    return 0;
}