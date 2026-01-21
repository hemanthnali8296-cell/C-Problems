#include <stdio.h>
char calculateGrade(int marks) {
    if (marks >= 90 && marks <= 100)
        return 'A';
    else if (marks >= 75 && marks < 90)
        return 'B';
    else if (marks >= 50 && marks < 75)
        return 'C';
    else
        return 'F';  
}
int main() {
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);
    grade = calculateGrade(marks);
    if (grade == 'F')
        printf("Grade: Fail\n");
    else
        printf("Grade: %c\n", grade);

    return 0;
}
