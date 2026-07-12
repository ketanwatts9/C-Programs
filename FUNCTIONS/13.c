#include <stdio.h>
int great(int n,int arr[]);
int great(int n,int arr[]){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = great(n,arr);
    printf("%d",max);
    return 0;
}