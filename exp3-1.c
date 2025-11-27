#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check validity: sum of any two sides > third side
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid.\n");

        // Check for Equilateral
        if (a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        }
        // Check for Isosceles
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles.\n");
        }
        // Check for Right-angled triangle using Pythagoras theorem
        else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            printf("Triangle is Right-angled.\n");
        }
        else {
            printf("Triangle is Scalene.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
