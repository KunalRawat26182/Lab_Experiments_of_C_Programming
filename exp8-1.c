#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';

    int *ptr_int = &i;
    float *ptr_float = &f;
    char *ptr_char = &c;

    // Print values of variables
    printf("Values of variables:\n");
    printf("int i = %d\n", i);
    printf("float f = %.2f\n", f);
    printf("char c = %c\n", c);

    // Print addresses stored in pointers
    printf("\nAddresses stored in pointers:\n");
    printf("ptr_int = %p\n", ptr_int);
    printf("ptr_float = %p\n", ptr_float);
    printf("ptr_char = %p\n", ptr_char);

    // Print values pointed to by pointers
    printf("\nValues pointed to by pointers:\n");
    printf("*ptr_int = %d\n", *ptr_int);
    printf("*ptr_float = %.2f\n", *ptr_float);
    printf("*ptr_char = %c\n", *ptr_char);

    return 0;
}
