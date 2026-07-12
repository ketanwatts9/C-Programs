#include <stdio.h>
void great();
void great(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int max = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("greatest number = %d",max);
}
int main(){
    great();
    return 0;
}