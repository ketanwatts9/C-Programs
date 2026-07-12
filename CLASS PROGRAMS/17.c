#include <stdio.h>
int main(){
    int i=1;
    int n;
    float sum=0;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            printf("%d\n",i);
            sum+=i;
        }
        i++;
    }
    printf("%.2f",sum);
    return 0;
}