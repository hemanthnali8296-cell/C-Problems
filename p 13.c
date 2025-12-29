#include <stdio.h>
int main() {
   int age;
   printf("Age:");
    scanf("%d",&age);
    if(age>=18&&age<100){
        printf("Eligible");
    }else {
        printf("Not Eligible");
    }
    return 0;
}