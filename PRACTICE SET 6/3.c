#include <stdio.h>
void change(int* a){
    *a = *a *10;
}
int main(){
    int x = 30;
    change(&x);
    printf("%d",x);
}