// Pointer arithmetic means performing operations on pointers.

// Allowed operations:
// Increment (p++)
// Decrement (p--)
// Addition (p + n)
// Subtraction (p - n)

// 👉 When we increment a pointer, it moves to the next memory location of its data type.

#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%d\n", *p);     // 10
    p++;                    // move to next element
    printf("%d\n", *p);     // 20

    return 0;
}