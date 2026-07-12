#include<stdio.h>
int main(){
    // int length = 10;
    // int breadth = 20;
    int length,breadth;
    printf("enter length: ");
    scanf("%d",&length);
    printf("enter breadth: ");
    scanf("%d",&breadth);
    int area = length*breadth;
    printf("area is %d",area);
    return 0;
}