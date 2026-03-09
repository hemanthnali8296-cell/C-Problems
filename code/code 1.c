#include <stdio.h>
int main() {
    //Your Code goes here!
    int salary;
    printf("Salary:");
    scanf("%d",&salary);
    if(salary>=20000){
        salary=salary+2000;
        printf("final salary:%d",salary);
    }else{
        salary=salary+1000;
        printf("final salary:%d",salary);
    }
    return 0;
}