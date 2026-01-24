#include <stdio.h>
int calculateBonus(int experience)
{
    int bonus;

    if (experience <2)
        bonus = 0;
    else if (experience <= 5)
        bonus = 5000;
    else if (experience <= 10)
        bonus = 10000;
    else
        bonus = 20000;
    return bonus;
}
int main()
{
    int experience, bonusAmount;
    printf("Enter years of experience: ");
    scanf("%d", &experience);
    bonusAmount = calculateBonus(experience);
    printf("Bonus Amount = Rs.%d", bonusAmount);
    return 0;
}

