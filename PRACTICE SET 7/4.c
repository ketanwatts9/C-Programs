#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[10];
    for(int i=1;i<=10;i++){
        arr[i-1] = n*i;
    }
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    } 
}