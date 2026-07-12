#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 10;
    int *ptr;
    ptr = (int*) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    n = 15;
    ptr = realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}