#include<stdio.h>
int main(){
   int n=5;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("*");
    }
    if(i!=n){
        for(int space=1;space<=2*(n-i);space++){
            printf(" ");
        }
    }
    for(int j=i;j>=1;j--){
        printf("*");
    }
    printf("\n");
   }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        if(i!=n){
            for(int space=1;space<=2*(n-i);space++){
                printf(" ");
            }
        }
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}