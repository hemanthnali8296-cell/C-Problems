#include<stdio.h>
int main(){
    char str[50];
    int length=0;
    scanf("%s",str);
    while(str[length]!='\0'){
        length++;
    }
    printf("%d",length);
    return 0;
}

