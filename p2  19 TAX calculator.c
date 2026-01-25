#include <stdio.h>
int calculateTax(float salary){
    float tax=0;
    if(salary<=200000){
        tax=0;
    }else if(salary<=500000){
        tax=salary*0.05;
    }else if(salary<=800000){
        tax=salary*0.10;
    }else if(salary<=1000000){
        tax=salary*0.15;
    }else{
        tax=salary*0.20;
    }return tax;
}
int main() {
     float salary,tax;
     printf("Enter salary:");
     scanf("%f",&salary);
     tax = calculateTax(salary);
     printf("Income Tax=%.2f",tax);
    return 0;
}