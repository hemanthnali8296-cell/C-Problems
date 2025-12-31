#include <stdio.h>
int main() {
   int num,x;
   int reminder,rev=0;
  
      printf("Enter the Value:");
      scanf("%d",&num);
      x=num;
        while(num!=0){
             reminder = num % 10;
            rev = rev *10+ reminder;
            num = num/10;
        }if(x == rev){
            printf("%d  is Palindrome",rev);
        }else {
            printf("  Not Palindrome");
        }
    
    return 0;
}