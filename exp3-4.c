#include <stdio.h>

int main() {
    int year, day;
    int leapYears, normalYears;

    printf("Enter the year: ");
    scanf("%d", &year);

    year = year - 1;

    leapYears = year / 4 - year / 100 + year / 400;
    normalYears = year - leapYears;

    day = (normalYears * 1 + leapYears * 2) % 7;

    printf("\n1st January of the given year is ");

    if (day == 0)
        printf("Monday\n");
    if (day == 1)
        printf("Tuesday\n");
    if (day == 2)
        printf("Wednesday\n");
    if (day == 3)
        printf("Thursday\n");
    if (day == 4)
        printf("Friday\n");
    if (day == 5)
        printf("Saturday\n");
    if (day == 6)
        printf("Sunday\n");

    return 0;
}
