#include <stdio.h>
int main() {
    //Your Code goes here!
    int password;
    scanf("%d",&password);
    if(password==1234){
        printf("Access Granted");
    }else{
        printf("Access Denied");
    }
    return 0;
}