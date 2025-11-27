#include <stdio.h>

int main() {
    int num = 8;   // 1000 in binary

    // Left Shift
    int left = num << 1;   // shift bits 1 place to left
    printf("Left shift: %d << 1 = %d\n", num, left);

    // Right Shift
    int right = num >> 1;  // shift bits 1 place to right
    printf("Right shift: %d >> 1 = %d\n", num, right);

    return 0;
}
