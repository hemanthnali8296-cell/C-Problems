#include <stdio.h>

int main() {
    float population, new_population;

    printf("Enter current population: ");
    scanf("%f", &population);

    if (population < 50000)
        new_population = population + (population * 0.10);
    else if (population <= 100000)
        new_population = population + (population * 0.08);
    else
        new_population = population + (population * 0.05);

    printf("New population = %.2f", new_population);
    return 0;
}
