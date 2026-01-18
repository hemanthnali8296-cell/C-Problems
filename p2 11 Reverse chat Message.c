#include <stdio.h>
#include<string.h>
int main() {
    char ch[50];
    printf("Emter the chat message:");
    fgets(ch,sizeof(ch),stdin);
    strrev(ch);
    printf("%s",ch);
    
    return 0;
}