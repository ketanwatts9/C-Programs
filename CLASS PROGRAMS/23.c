#include <stdio.h>
int main(){
    char arr[100];
    printf("Enter string: ");
    fgets(arr,sizeof(arr),stdin);
    printf("%s",arr);
    int len = 0;
    // while (arr[len]!='\0')
    // {
    //     len++;
    // }
    for (len = 0; arr[len] != '\0'; len++);    
    printf("length of string: %d",len);
    return 0;
}