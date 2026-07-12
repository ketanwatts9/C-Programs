#include <stdio.h>
float interest(float,float,float);
float interest(float p,float r,float t){
    float SI = (p*r*t)/100.0;
    return SI;
}
int main(){
    float p,r,t;
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    float SI = interest(p,r,t);
    printf("%.2f",SI);
    return 0;
}