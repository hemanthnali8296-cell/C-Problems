
#include <stdio.h>
float calculateBill(int units) {
    float bill = 0.0;
    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 200) {
        bill = (100 * 1.50) + (units - 100) * 2.50;
    }
    else {
        bill = (100 * 1.50) + (100 * 2.50) + (units - 200) * 4.00;
    }
    return bill;
}
int main() {
    int units;
    float totalBill;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    totalBill = calculateBill(units);
    printf("Total Electricity Bill = Rs %.2f\n", totalBill);
    return 0;
}
