#include <stdio.h>
void greatest();
void greatest(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    else 
        printf("%d",b);
}
int main(){
    greatest();
    return 0;
}