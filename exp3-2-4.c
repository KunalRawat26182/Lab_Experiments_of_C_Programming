#include <stdio.h>

int main() {
    double population = 100000; 
    int year;
    double growthRate = 0.10;  

    printf("Year\tPopulation\n");
    printf("-------------------\n");

    for (year = 1; year <= 10; year++) {
        population = population + (population * growthRate); 
        printf("%d\t%.0lf\n", year, population);
    }

    return 0;
}
