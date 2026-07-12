#include <stdio.h>

void touppercase(char arr[]);   // function declaration

int main(){
    char str[50];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    touppercase(str);

    printf("Uppercase: %s", str);

    return 0;
}

void touppercase(char arr[]){
    int i = 0;

    while(arr[i] != '\0'){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 32;
        }
        i++;
    }
}