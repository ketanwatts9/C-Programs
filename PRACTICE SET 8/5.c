#include <stdio.h>
void mystrcpy(char new[],char str[]){
    int i =0;
    while(str[i] != '\0'){
        new[i] = str[i];
        i++;
    }
    new[i] = '\0';
}
int main(){
    char str[] ="ketan";
    char new[20];
    mystrcpy(new,str);
    printf("%s",new);
    return 0;
}