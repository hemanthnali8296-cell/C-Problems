#include <stdio.h>

int main() {
    float salary, bonus;

    printf("Enter basic salary: ");
    scanf("%f", &salary);

    if (salary < 10000)
        bonus = salary * 0.10;
    else if (salary <= 20000)
        bonus = salary * 0.15;
    else
        bonus = salary * 0.20;

    printf("Bonus = %.2f", bonus);
    return 0;
}
