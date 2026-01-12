#include <stdio.h>
#include<string.h>
int main() {
char  binary[20];
int decimal=0,base=1;
printf("Enter the binary number:");
scanf("%s",&binary);
int len = strlen(binary);
  for(int i=len-1;i>=0;i--){
    if(binary[i]=='1'){
        decimal+=base;
    }
    base=base*2;
  }
    printf("%d",decimal);

    return 0;
}