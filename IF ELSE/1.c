#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    if(a!=b){
        temp = a;
        a = b;
        b = temp;
    }
    printf("value of a: %d\n",a);
    printf("value of b: %d",b);
    return 0;
}