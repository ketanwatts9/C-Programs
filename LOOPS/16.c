#include <stdio.h>
int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int even = 0;
    int odd = 0;
    while(n>0){
        int digit = n%10;
        n = n/10;
        if(digit%2==0){even++;}
        if(digit%2!=0){odd++;}
    }
    printf("no. of odd digits: %d\n",odd);
    printf("no. of even digits: %d",even);
    return 0;
}