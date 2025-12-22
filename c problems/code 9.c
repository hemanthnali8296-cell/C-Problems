#include <stdio.h>
int main() {
    //Your Code goes here!
    int age ,salary;
    scanf("%d %d",&age,&salary);
    if(age>=25 && salary>=30000){
        printf("Eligible");
    }else{
        printf("Not eligible");
    }
    return 0;
}