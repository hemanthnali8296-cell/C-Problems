#include <stdio.h>
int main() {
    //Your Code goes here!
    int num;
    int rev=0,reminder;
    printf("Enter the Value:");
    scanf("%d",&num);
    while(num!=0){
        reminder = num%10;
        rev = rev* 10 + reminder;
        num = num/10;
    }printf("%d",rev);

    return 0;
}