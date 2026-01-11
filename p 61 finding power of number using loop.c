#include <stdio.h>
int main() {
   int base,exponent;
   int result=1;

   printf("Enter base number:");
   scanf("%d",&base);
   printf("Enter the exponent:");
   scanf("%d",&exponent);

   for(int i=1;i<=exponent;i++){
    result= result*base;
   }
   printf("%d power %d=%d",base,exponent,result);
    
    return 0;
}