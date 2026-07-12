#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main(){
    char str1[200],str2[200];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i]){
            printf("strings are different");
            return 0;
        }
        i++;
    }
    printf("strings are same");
    return 0;
    
}