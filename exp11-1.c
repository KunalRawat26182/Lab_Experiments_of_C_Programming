#include <stdio.h>

int main() {
    int a = 5;   // 0101 in binary
    int b = 3;   // 0011 in binary

    printf("a & b = %d\n", a & b);   // AND
    printf("a | b = %d\n", a | b);   // OR
    printf("a = %d\n", a);         // NOT

    return 0;
}
