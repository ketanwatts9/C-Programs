#include <stdio.h>
int main(){
    int pp,sp,amount;

    printf("enter purchase price: ");
    scanf("%d",&pp);
    printf("enter selling price: ");
    scanf("%d",&sp);

    if(sp>pp){
        amount = sp-pp;
        printf("profit: %d",amount);
    }
    else if(pp>sp){
        amount = pp-sp;
        printf("loss: %d",amount);
    }
    else{
        printf("no profit no loss");
    }

    return 0;
}