#include <stdio.h>
#include<string.h>
int main() {
    char c[30];
    char rev[30];
    fgets(c,30,stdin);
    c[strcspn(c,"\n")] ='\0';

    strcpy(rev,c);
    strrev(rev);
    if(strcmp(c,rev)==0){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    
    return 0;
}