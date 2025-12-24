#include <stdio.h>
int main() {
    //Your Code goes here!
    int age ;
    scanf("%d",&age);
    if(age<=13){
        printf("Child");
    }else if(age>13&&age<20){
        printf("Teen");
    }else{
        printf("Adult");
    }
    return 0;
}