#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("2.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"10 X %d = %d\n",(i+1),10*(i+1));
    }
    fclose(ptr);
    return 0;
}