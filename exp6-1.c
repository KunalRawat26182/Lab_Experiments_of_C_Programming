#include <stdio.h>

// Recursive function for factorial
long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

// Non-recursive function for factorial
long fact_nonrecursive(int n) {
    long f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

// Function to compute binomial coefficient C(n, r)
long binomial_coefficient(int n, int r) {
    return fact_recursive(n) / (fact_nonrecursive(r) * fact_nonrecursive(n - r));
}

int main() {
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input! (r cannot be greater than n)\n");
        return 0;
    }

    long result = binomial_coefficient(n, r);
    printf("\nBinomial Coefficient C(%d, %d) = %ld\n", n, r, result);

    // Table of results for demonstration
    printf("\nTable of C(n, r):\n");
    printf("-------------------\n");
    printf(" n   r   C(n, r)\n");
    printf("-------------------\n");
    for (n = 0; n <= 5; n++) {
        for (r = 0; r <= n; r++) {
            printf(" %2d  %2d   %4ld\n", n, r, binomial_coefficient(n, r));
        }
    }
    printf("-------------------\n");

    return 0;
}
