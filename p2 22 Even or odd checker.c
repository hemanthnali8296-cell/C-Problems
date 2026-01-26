#include <stdio.h>
void checkEvenOdd(int num)
{
    if (num % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkEvenOdd(number);  
    return 0;
}
