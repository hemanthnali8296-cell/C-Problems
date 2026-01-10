#include <stdio.h>
#include<string.h>
int main() {
 char num[20];
 int i,digit,sum=0,x=0;
 scanf("%s",num);
 for(i=0;i<strlen(num);i++){
    digit=num[i]-'0';
    x = x * 10 + digit;
    sum= sum+(digit*digit*digit);
 }
 if(sum == x){
    printf("Amstrong Number");
 }
    else{
        printf("Not Amstrong Number");
    }
    return 0;
}