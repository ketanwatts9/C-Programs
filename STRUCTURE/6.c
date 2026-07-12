#include <stdio.h>

struct customer
{
    float p,r,t;
};

int main(){
    struct customer c;
    struct customer *ptr = &c;

    printf("enter principal: ");
    scanf("%f",&ptr->p);

    printf("enter rate: ");
    scanf("%f",&ptr->r);

    printf("enter time: ");
    scanf("%f",&ptr->t);

    float si = (ptr->p * ptr->r * ptr->t)/100;

    printf("SI = %.2f",si);
    return 0;
}
