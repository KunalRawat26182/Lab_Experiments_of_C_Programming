#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        if (num < 0)
            negative++;
        if (num == 0)
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); 
    } while (choice == 'y' || choice == 'Y');

    printf("\nTotal Positive numbers: %d", positive);
    printf("\nTotal Negative numbers: %d", negative);
    printf("\nTotal Zeros: %d\n", zero);

    return 0;
}
