// A void pointer is a pointer that can store the address of any data type.

// It is also called a generic pointer
// It cannot be dereferenced directly
// Must be typecasted before use

#include <stdio.h>
int main() {
    int a = 5;
    float b = 3.5;

    void *p;

    p = &a;
    printf("Value of a = %d\n", *(int*)p);

    p = &b;
    printf("Value of b = %.2f\n", *(float*)p);

    return 0;
}