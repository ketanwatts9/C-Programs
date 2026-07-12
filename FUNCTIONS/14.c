#include <stdio.h>
int sum(int n, int arr1[], int arr2[], int arr[]);
int sum(int n, int arr1[], int arr2[], int arr[])
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i] + arr2[i];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    sum(n, arr1, arr2, arr);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}