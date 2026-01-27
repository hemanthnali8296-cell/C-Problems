#include <stdio.h>
float calculateAttendance(int totalClasses, int attendedClasses)
{
    return (attendedClasses * 100.0) / totalClasses;
}
int main(){
    int total, attended;
    float percentage;
    printf("Enter total number of classes: ");
    scanf("%d", &total);
    printf("Enter number of classes attended: ");
    scanf("%d", &attended);
    percentage = calculateAttendance(total, attended);
    printf("Attendance Percentage = %.2f%%", percentage);
    return 0;
}
