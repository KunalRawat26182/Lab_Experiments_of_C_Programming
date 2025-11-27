#include <stdio.h>

int main() {
    int L, i, j, sum, count;

    printf("Enter the limit L: ");
    scanf("%d", &L);

    printf("Ramanujan numbers up to %d:\n", L);

    for (sum = 1; sum <= L; sum++) {
        count = 0;

        for (i = 1; i <= sum; i++) {
            for (j = i; j <= sum; j++) {
                if (i*i*i + j*j*j == sum) {
                    count++;
                    // If we find 2 pairs, print sum and break
                    if (count == 2) {
                        printf("%d\n", sum);
                        goto next_sum; // skip checking further pairs
                    }
                }
            }
        }
        next_sum: ;
    }

    return 0;
}
