#include <stdio.h>
int main() {
   char ch;
    printf("Charecter:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        printf("Alphabet");
    }else {
        printf("Not An Alphabet");
    }
    return 0;
}