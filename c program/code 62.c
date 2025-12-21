#include <stdio.h>
int main() {
    //Your Code goes here!
   int num;
   scanf("%d",&num);
   if(num%3==0 || num%7==0){
    printf("Yes");
   } else {
    printf("No");
   }
    return 0;
}