#include <stdio.h>

int main(){
    char gender;
    float salary, bonus, total_salary;
    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender);
    printf("Enter salary: ");
    scanf("%f", &salary);
    if (salary < 10000) {
        bonus = salary * 0.02;
    }else if (gender == 'M' || gender == 'm') {
        bonus = salary * 0.05;
    }else if (gender == 'F' || gender == 'f') {
        bonus = salary * 0.10;
    }else{
        bonus = 0;
        printf("Invalid gender entered\n");
    }
    total_salary = salary + bonus;
    printf("Bonus amount: %.2f\n", bonus);
    printf("Total salary after bonus: %.2f\n", total_salary);
    return 0;
}
