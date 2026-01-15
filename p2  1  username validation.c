#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    int i, len, valid = 1;

    printf("Enter username: ");
    scanf("%s", username);   // safer for simple compilers

    len = strlen(username);

    // Length check
    if (len < 6 || len > 12) {
        printf("Invalid Username\n");
        return 0;
    }

    // First character should not be digit
    if (username[0] >= '0' && username[0] <= '9') {
        printf("Invalid Username\n");
        return 0;
    }

    // Check characters
    for (i = 0; i < len; i++) {
        if (!((username[i] >= 'a' && username[i] <= 'z') ||
              (username[i] >= '0' && username[i] <= '9'))) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid Username\n");
    else
        printf("Invalid Username\n");

    return 0;
}
