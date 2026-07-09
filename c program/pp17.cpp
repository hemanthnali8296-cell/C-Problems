#include <stdio.h>
int countDigits(int num) {
    int count=0;
    if(num==0) {
        return 1;
    }
    while(num!=0) {
        num=num/10;
        count++;
    }
    return count;
}
int main(){
    int num;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    printf("You Entered Number: %d\n",num);
    printf("The Number Of Digits in the Number: %d",countDigits(num));
    return 0;
}
