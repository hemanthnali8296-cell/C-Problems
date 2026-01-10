#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    int a, b = 0, i, temp;

    printf("Enter first number (string): ");
    fgets(s, sizeof(s), stdin);

    printf("Enter second number (integer): ");
    scanf("%d", &a);

    
    s[strcspn(s, "\n")] = '\0';

    
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            b = b * 10 + (s[i] - '0');
        }
    }

    
    while (a != 0) {
        temp = a;
        a = b % a;
        b = temp;
    }

    printf("GCD = %d", b);

    return 0;
}
