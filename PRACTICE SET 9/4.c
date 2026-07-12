#include <stdio.h>
typedef struct emp
{
    int salary;
    float score;
} E;
int main(){
    E e1;
    E* ptr1 = &e1;
    // (*ptr1).salary = 56;
    ptr1->salary = 56;
    return 0;
}