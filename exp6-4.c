#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1)
        return 0; // not prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; // not prime
    }
    return 1; // prime
}

int main() {
    int start, end;

    printf("Enter start and end range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
