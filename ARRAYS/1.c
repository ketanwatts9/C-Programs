#include <stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("sum: %d\n",sum);
    printf("average: %d",sum/n);
}