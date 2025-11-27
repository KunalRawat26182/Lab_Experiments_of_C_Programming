#include <stdio.h>

// Function to modify values using pointers
void modifyValues(int *a, float *b, char *c) {
    *a = *a + 10;      // Increment integer by 10
    *b = *b * 2;       // Double the float value
    *c = *c + 1;       // Change char to next character
}

int main() {
    int x = 5;
    float y = 3.5;
    char z = 'A';

    printf("Original values:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    // Pass variables by reference
    modifyValues(&x, &y, &z);

    printf("\nModified values:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    return 0;
}
