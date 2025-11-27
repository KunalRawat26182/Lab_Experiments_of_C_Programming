#include <stdio.h>

int main() {
    int a = 10;  // variable in main block
    printf("In main block: a = %d\n", a);

    {   // start of a new inner block
        int b = 20;  // variable in inner block
        printf("In inner block: a = %d, b = %d\n", a, b); // can access both a and b
    }   // end of inner block

    printf("Outside inner block: a = %d\n", a);

    // Trying to access b outside its block (will cause error if uncommented)
    // printf("Outside inner block: b = %d\n", b);

    return 0;
}
