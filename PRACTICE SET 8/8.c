#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "keaan tan";
    char target = 'a';
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == target)
        count++;
    }
    printf("%d",count);
    return 0;
}