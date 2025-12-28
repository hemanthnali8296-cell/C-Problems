#include<stdio.h>
int main(){
    int year;
    printf("Year:");
    scanf("%d",&year);
    if(year%4==0&& year*100/10){
        printf("leap Year");
    }else{
        printf("Not Leap Year");
    }return 0;
}