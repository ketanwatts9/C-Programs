#include <stdio.h>
int main(){
    int C,D,temp;
    printf("enter C: ");
    scanf("%d",&C);
    printf("enter D: ");
    scanf("%d",&D);
    temp = C;
    C = D;
    D = temp;
    printf("value of C: %d\n",C);
    printf("value of D: %d",D);
    return 0;
}
