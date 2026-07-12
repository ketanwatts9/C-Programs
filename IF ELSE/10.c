#include <stdio.h>
int main(){
    int a,b,c,d;

    printf("enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a>b){
       if(a>c){
        if(a>d){
            printf("Greatest: %d",a);
        }
        else{
            printf("Greatest: %d",d);
        }
       }
       else{
        if(c>d){
            printf("Greatest: %d",c);
        }
        else{
            printf("Greatest: %d",d);
        }
       }
    }
    else{
        if(b>c){
            if(b>d){
                printf("Greatest: %d",b);
            }
            else{
                printf("Greatest: %d",d);
            }
        }
        else{
            if(c>d){
                printf("Greatest: %d",c);
            }
            else{
                printf("Greatest: %d",d);
            }
        }
    }
    return 0;
}