#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    int upper = 0, lower = 0, digit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int length = strlen(password);

    if (length < 8) {
        printf("Weak password: Minimum 8 characters required.\n");
        return 0;
    }

    for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;
        else if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
    }

    if (upper && lower && digit)
        printf("Strong password ✔\n");
    else
        printf("Weak password ✘\n");

    return 0;
}
