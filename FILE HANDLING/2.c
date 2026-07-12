#include <stdio.h>
int main(){
    FILE *ptr,*ptr1;
    ptr = fopen("2.txt","r");
    ptr1 = fopen("2(1).txt","w");
    char line[200];
    for (int i = 0; i < 5; i++)
    {
        if(fgets(line,200,ptr)==NULL) break;
        fputs(line,ptr1);
    }
    return 0;
}