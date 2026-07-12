#include <stdio.h>

typedef struct c 
{
    int r;
    int i;
}C;

void display(C c){
    printf("compplex is %d + %di",c.r,c.i);
}

int main(){
    C comp[5];
    for (int j = 0; j < 5; j++)
    {
        scanf("%d %d",&comp[j].r,&comp[j].i);
        display(comp[j]);
    }
    
    return 0;
}