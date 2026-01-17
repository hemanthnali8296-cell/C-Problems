#include <stdio.h>
#include <string.h>

int main(){
    char code[100], reverse[100];
    int i, length;
    printf("Enter the product code: ");
    scanf("%s", code);
    length = strlen(code);
    for(i = 0; i < length; i++) {
        reverse[i] = code[length - i - 1];
    }
    reverse[i] = '\0';
    if(strcmp(code, reverse) == 0){
        printf("PALINDROME\n");
    }
    else{
        printf(" NOT a PALINDROME\n");
    }
    return 0;
}
