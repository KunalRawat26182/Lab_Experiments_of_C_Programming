#include <stdio.h>

int main() {
    const float PI = 3.14;  // constant variable
    const int MAX = 100;    // another constant

    printf("Value of PI: %f\n", PI);
    printf("Value of MAX: %d\n", MAX);

    float radius = 5;
    float area = PI * radius * radius;
    printf("Area of circle: %.2f\n", area);

    // PI = 3.1415; // ERROR: cannot change a const variable

    return 0;
}
