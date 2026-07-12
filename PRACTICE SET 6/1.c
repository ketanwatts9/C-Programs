#include <stdio.h>
int main(){
    int i = 10;
    int* j = &i;
    printf("value of i: %p\n",i);
    printf("value of adress of i: %p\n",j);
    printf("value of i: %p\n",*j);
    return 0;
}