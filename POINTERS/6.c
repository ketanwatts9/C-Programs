#include <stdio.h>
int search(int *arr,int n,int key){
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        if(*(ptr+i)==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 3;
    int result = search(arr,5,key);
    printf("%d",result);
}