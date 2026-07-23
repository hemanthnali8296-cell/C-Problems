#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[30];
    int vow = 0, cons = 0, i = 0;
    printf("Enter a string : ");
    gets(str);
    strupr(str);
    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            if(toupper(str[i] == 'A'))
                vow++;
            else
                cons++;
        }
        i++;
    }
    printf("\nNumber of vowels = %d", vow);
    printf("\nNumber of consonants = %d", cons);
}
