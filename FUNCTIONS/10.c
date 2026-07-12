#include <stdio.h>
void great(int,int,int);
void great(int a,int b,int c){
    if(a>b && a>c){
        printf("%d",a);
    }
    else if(b>c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
}
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    great(a,b,c);
    return 0;
}