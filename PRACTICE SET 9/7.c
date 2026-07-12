#include <stdio.h>

typedef struct c 
{
    int r;
    int i;
}C;

int main(){
    C c= {1,2};
    printf("the value of complex is %d + %di",c.r,c.i);
    return 0;
}