#include <stdio.h>

void demoStatic() {
    static int count = 0;  // static variable
    count = count + 1;     // increase value
    printf("count = %d\n", count);
}

int main() {
    demoStatic();  // first call
    demoStatic();  // second call
    demoStatic();  // third call
    return 0;
}
