#include <stdio.h>
int great(int,int);
int great(int a,int b){
    if(a>b) printf("%d",a);
    else printf("%d",b);
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    great(a,b);
    return 0;
}