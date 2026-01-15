#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[] = "@company.com";

    printf("Enter email address: ");
    scanf("%s", email);

    int email_len = strlen(email);
    int domain_len = strlen(domain);

    if (email_len >= domain_len &&
        strcmp(email + email_len - domain_len, domain) == 0) {
        printf("Valid official email address.\n");
    } else {
        printf("Invalid email address. Use official company domain.\n");
    }

    return 0;
}
