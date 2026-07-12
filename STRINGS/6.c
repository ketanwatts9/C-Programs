#include <stdio.h>
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int i = 0,count = 0;
    while (str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}