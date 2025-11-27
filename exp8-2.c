#include <stdio.h>
int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';

    int *ptr_int = &i;
    float *ptr_float = &f;
    char *ptr_char = &c;

    printf("Original addresses and values:\n");
    printf("ptr_int = %p, *ptr_int = %d\n", ptr_int, *ptr_int);
    printf("ptr_float = %p, *ptr_float = %.2f\n", ptr_float, *ptr_float);
    printf("ptr_char = %p, *ptr_char = %c\n", ptr_char, *ptr_char);

    // Increment pointers
    ptr_int++;
    ptr_float++;
    ptr_char++;

    printf("\nAfter incrementing pointers:\n");
    printf("ptr_int = %p\n", ptr_int);
    printf("ptr_float = %p\n", ptr_float);
    printf("ptr_char = %p\n", ptr_char);

    // Decrement pointers
    ptr_int--;
    ptr_float--;
    ptr_char--;

    printf("\nAfter decrementing pointers (back to original):\n");
    printf("ptr_int = %p, *ptr_int = %d\n", ptr_int, *ptr_int);
    printf("ptr_float = %p, *ptr_float = %.2f\n", ptr_float, *ptr_float);
    printf("ptr_char = %p, *ptr_char = %c\n", ptr_char, *ptr_char);

    return 0;
}
