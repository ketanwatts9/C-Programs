// A pointer is a variable that stores the address of another variable.

// Instead of storing a value directly, it stores the memory location.
// Pointers are very useful for:
// Dynamic memory allocation
// Passing arguments to functions
// Working with arrays and strings

#include <stdio.h>
int main() {
    int a = 10;
    int *p;   // pointer declaration

    p = &a;   // storing address of a

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer p stores = %p\n", p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}