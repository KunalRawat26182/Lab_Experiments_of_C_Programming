#include <stdio.h>

// Global variable
int globalVar = 10;

void demoLocal() {
    // Local variable
    int localVar = 5;
    printf("Inside demoLocal(): localVar = %d\n", localVar);
    printf("Inside demoLocal(): globalVar = %d\n", globalVar);
}

int main() {
    // Accessing global variable inside main
    printf("Inside main(): globalVar = %d\n", globalVar);

    demoLocal();

    // Trying to access localVar outside its function (will cause error if uncommented)
    // printf("Inside main(): localVar = %d\n", localVar);

    return 0;
}
