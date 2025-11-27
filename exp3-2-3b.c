#include <stdio.h>

int main() {
    int rows, i, j;
    long long num;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        num = 1;  
        for (j = 0; j <= i; j++) {
            printf("%lld ", num);
            num = num * (i - j) / (j + 1);  
        }
        printf("\n");
    }

    return 0;
}
