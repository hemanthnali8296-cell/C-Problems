#include <stdio.h>
int main() {
   int num;
   printf("Num:");
    scanf("%d",&num);
    if(num%11==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}