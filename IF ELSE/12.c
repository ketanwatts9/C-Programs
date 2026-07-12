#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("Greatest: %d",a);
    }
    else if(b>c && b>d){
        printf("Greatest: %d",b);
    }
    else if(c>d){
        printf("Greatest: %d",c);
    }
    else{
        printf("Greatest: %d",d);
    }
    return 0;
}