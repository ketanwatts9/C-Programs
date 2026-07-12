#include <stdio.h>
int great(int* arr,int n){
    int* max = arr;
    for (int i = 0; i < n; i++)
    {
        if(*(arr+i)>*max){
            max = arr+i;
        }
    }
    printf("max: %d",*max);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    great(arr,5);
    return 0;
}