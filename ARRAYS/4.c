#include <stdio.h>
int main(){
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int start,end;
    printf("Enter start month:");
    scanf("%d",&start);
    printf("Enter end month:");
    scanf("%d",&end);
    int total = 0;
    for (int i = start; i <= end; i++)
    {
        total += days[i-1];
        printf("%d",days[i+1]);
        if(i!=end){
            printf("+");
        }
    }
    printf("=%d",total);
    return 0;
}