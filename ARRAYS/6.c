#include <stdio.h>
int main(){
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value at A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }    
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || i+j==n-1){
                printf("%d ",a[i][j]);
            }
            else{
                printf("0 ");
            }
        } 
        printf("\n");   
    }
    return 0;
}