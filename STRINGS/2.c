#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int count = 0;
    char str[200];
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if((i == 0 && !isspace(str[i])) || (isspace(str[i-1]) && !isspace(str[i]))) count++;
    }
    printf("%d",count);
    return 0;
}