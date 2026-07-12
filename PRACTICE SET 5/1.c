#include <stdio.h>
float avg(int,int,int);
float avg(int a,int b,int c){
    float average = (a+b+c)/3.0;
    printf("average is %.2f",average);
}
int main(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c:");
    scanf("%d",&c);
    avg(a,b,c);
    return 0;
}