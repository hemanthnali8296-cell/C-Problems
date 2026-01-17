#include <stdio.h>
#include<string.h>
int main() {
    char otp[6];
    int i,valid=1;
    printf("enter the otp:");
    scanf("%s",&otp);
    if(strlen(otp)!=6){
        valid=0;
    }
    else{
        for(i=0;otp[i]!='\0';i++){
            if(otp[i]<'0'||otp[i]>'9'){
                valid=0;
                break;
            }
        }
    }
    if(valid){
        printf("OTP is valid\n");
    }else{
        printf("OTP is Invalid");
    }
    
    return 0;
}