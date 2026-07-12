#include <stdio.h>
int main(){
    int m,n;
    
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);

    int a[m][n], b[m][n], c[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value at A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }    
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value at B[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }    
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }    
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",c[i][j]);
        }    
        printf("\n ");
    }
    return 0;
}