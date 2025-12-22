#include <stdio.h>
int main() {
    //Your Code goes here!
    int marks;
    printf("marks:");
    scanf("%d",&marks);
    if(marks>=40){
        printf("Pass");
    }else if(marks<40){
        printf("Fail");
    }
    return 0;
}