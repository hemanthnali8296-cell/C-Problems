#include <stdio.h>
int main() {
    //Your Code goes here!
   int num;
   printf("Num:");
   scanf("%d",&num);
   if(num>0){
    printf("positive");
   } else if (num<0){
    printf("Negative");
   }else{
    printf("Zero");
   }
    return 0;
}