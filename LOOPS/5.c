#include <stdio.h>
int main(){
    int n,even_sum=0,odd_sum=0;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            even_sum += i;
        }
        else{
            odd_sum +=i;
        }
    }
    printf("sum of evens = %d\n",even_sum);
    printf("sum of odds = %d",odd_sum);    
    return 0;
}