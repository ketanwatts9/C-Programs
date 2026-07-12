#include <stdio.h>
void count(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int arr[5] = {1,2,-3,4};
    count(arr,4);
}