#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char *word;
    char smallest[50] = "";
    char largest[50] = "";
    fgets(str, sizeof(str), stdin);
    word = strtok(str, " \n");
    while (word != NULL) {
        if (smallest[0] == '\0' || strlen(word) < strlen(smallest)) {
            strcpy(smallest, word);
        }
        if (largest[0] == '\0' || strlen(word) > strlen(largest)) {
            strcpy(largest, word);
        }
        word = strtok(NULL, " \n");
    }
    if (smallest[0] != '\0') {
        printf("Smallest word: %s\n", smallest);
        printf("Largest word: %s\n", largest);
    } else {
        printf("No words found in the string.\n");
    }
    return 0;
}
