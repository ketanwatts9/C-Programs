#include <stdio.h>
void pal();
void pal(){
    int a;
    scanf("%d",&a);
    int original = a;
    int rev = 0;
    while(a>0){
        int digit = a%10;
        rev = (rev*10)+digit;
        a = a/10;
    }
    if(original==rev) printf("palindrome");
    else printf("not palinfrome");
}
int main(){
    pal();
    return 0;
}