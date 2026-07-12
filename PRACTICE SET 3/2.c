#include <stdio.h>
int main(){
    int a,b,c,total,percentage;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    total = a+b+c;
    percentage = (total/300)*100;
    if(percentage>=40 && a>=33 && b>=33 && c>=33){
        printf("passed");
    }
    else{
        printf("failed");
    }
    return 0;
}