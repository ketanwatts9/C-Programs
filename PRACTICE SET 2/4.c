#include <stdio.h>
int main(){
    int x=2,y=3,z=3,k=1;
    float result;
    result = 3*x/y-z+k;
    printf("result is %f",result);
    return 0;
}

/*
3*x/y-z+k
6/y-z+k
2-z+k
-1+k
0
*/