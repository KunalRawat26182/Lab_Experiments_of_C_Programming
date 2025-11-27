#include <stdio.h>

// Global variable
int globalVar = 10;

void show() {
    printf("Inside show(): globalVar = %d\n", globalVar);
}

void change() {
    globalVar = globalVar + 5;
    printf("Inside change(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): globalVar = %d\n", globalVar);

    show();   // display global variable
    change(); // modify global variable
    show();   // display updated value

    return 0;
}
