#include <stdio.h>
int main() {
    int number, digit, count = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the digit to find frequency: ");
    scanf("%d", &digit);
    while (number != 0) {
        remainder = number % 10;
        if (remainder == digit) {
            count++;
        }
        number = number / 10;
    }
    printf("Frequency of %d is %d\n", digit, count);
    return 0;
}
