#include <stdio.h>
int main() {
    //Your Code goes here!
    int num;
    printf("Number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}