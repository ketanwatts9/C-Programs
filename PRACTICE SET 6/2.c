#include <stdio.h>
void address(int *a){
    printf("adress of i: %p\n",a);
}
int main(){
    int i = 10;
    int* j = &i;
    printf("adress of i: %p\n",j);
    address(&i);
    return 0;
}