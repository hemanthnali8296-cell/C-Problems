#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the value:");
    scanf("%d",&n); /* Example: n = 6
                                Proper divisors of 6 are: 1, 2, 3
                                Sum should become 6
                                  */
    for(i=1;i<=n/2;i++){ 
        
        /* i = 1
           6 % 1 == 0 → true
           sum = 0 + 1 = 1
        */


        /* i = 2
           6 % 2 == 0 → true
           sum = 1 + 2 = 3
        */

        /* i = 3
           6 % 3 == 0 → true
           sum = 3 + 3 = 6
        */
        if(n%i==0){
            sum=sum+i;
        }
    }
      /* After loop:
       sum = 6
       n = 6
    */
    if(sum==n){
         printf("Perfect number");
    }else{
         printf(" Not Perfect number");
    }
}
