#include <stdio.h>

// Macro function to add two numbers
#define ADD(x, y) ((x) + (y))

int main() {
    int a = 10, b = 20;

    printf("Sum of %d and %d is %d\n", a, b, ADD(a, b));

    return 0;
}
