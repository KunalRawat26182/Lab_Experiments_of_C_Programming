#include <stdio.h>

int main() {
    int num = 8; // binary: 00001000

    printf("Original number: %d\n", num);

    // Left Shift
    printf("Left shift by 1: %d\n", num << 1);  // 8 << 1 = 16
    printf("Left shift by 2: %d\n", num << 2);  // 8 << 2 = 32

    // Right Shift
    printf("Right shift by 1: %d\n", num >> 1); // 8 >> 1 = 4
    printf("Right shift by 2: %d\n", num >> 2); // 8 >> 2 = 2

    return 0;
}
