#include <stdio.h>
#include <string.h>
int main() {
    char url[100];
    printf("Enter the URL: ");
    scanf("%s", url);
    if (strncmp(url, "http", 4) == 0) {
        printf("Valid URL");
    } else {
        printf("Invalid URL");
    }

    return 0;
}
