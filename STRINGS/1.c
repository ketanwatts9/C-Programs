#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[] = "KeTaN";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if(isupper(str[i])) count++;
    }
    printf("Number of uppercases: %d",count);
    return 0;
}