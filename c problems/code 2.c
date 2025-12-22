#include <stdio.h>
int main() {
    //Your Code goes here!
    int age;
    printf("age:");
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible");
    }else if(age<18){
        printf("Not Eligible");
    }
    return 0;
}