#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    int length;
    printf("Enter the file name: ");
    scanf("%s", filename);
    length = strlen(filename);
    if (length >= 4 && strcmp(filename + length - 4, ".txt") == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
