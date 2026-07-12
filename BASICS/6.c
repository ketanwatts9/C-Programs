#include <stdio.h>
int main(){
    float c,f;
    printf("enter temp (in f):");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("temp (in f): %.2f",c);
    return 0;
}
