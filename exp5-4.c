#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p, q;
    int i, j, k;

    // Input order of matrix A
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);

    // Input order of matrix B
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    // Check compatibility for multiplication
    if (n != p) {
        printf("\nMatrix multiplication not possible!");
        printf("\n(Number of columns of A must equal number of rows of B)\n");
        return 0;
    }

    // Input matrix A
    printf("\nEnter elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize C to 0
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print resultant matrix
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
