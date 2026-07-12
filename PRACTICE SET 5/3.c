#include <stdio.h>
float force(float);
float force(float m){
    float force = m*9.8;
    printf("force = %.2f",force);
    return force;
}
int main(){
    float m;
    scanf("%f",&m);
    force(m);
    return 0;
}