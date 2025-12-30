#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks : ");
    scanf("%d", &marks);

    if (marks >= 95 && marks <= 100)
        printf("Grade: O\n");
    else if (marks >= 85)
        printf("Grade: A+\n");
    else if (marks >= 75)
        printf("Grade: A\n");
    else if (marks >= 60)
        printf("Grade: B\n");
    else if (marks >= 0)
        printf("Grade: F\n");
    else
        printf("Invalid marks\n");

    return 0;
}
