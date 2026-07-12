#include <stdio.h>
int main() {
    int start, end,temp;
    int sum = 0;
    scanf("%d %d", &start, &end);
    if(start>end){
        temp = start;
        start = end;
        end = temp;
    }
    
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {   
            sum += i;
        }
    }

    printf("%d", sum);
    return 0;
}