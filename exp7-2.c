#include <stdio.h>

struct Employee {
    char name[50];
    float basicPay;
    float grossPay;
};
int main() {
    struct Employee emp[100];
    int n, i;
    float DA;

    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name of employee %d: ", i + 1);
        scanf("%s", emp[i].name);

        printf("Enter basic pay of %s: ", emp[i].name);
        scanf("%f", &emp[i].basicPay);

        DA = 0.52 * emp[i].basicPay;              // 52% of basic pay
        emp[i].grossPay = emp[i].basicPay + DA;   // Gross salary
    }

    printf("\n-------------------------------------------\n");
    printf("Employee Name\t\tGross Salary\n");
    printf("-------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-16s\t%.2f\n", emp[i].name, emp[i].grossPay);
    }

    printf("-------------------------------------------\n");
    return 0;
}
