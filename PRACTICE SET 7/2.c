#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int* ptr = arr;
    printf("first element: %d\n",*ptr);
    ptr = ptr +3;
    printf(" %d",*ptr);
    return 0;
}