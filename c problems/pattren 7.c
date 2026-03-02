#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int space=5;space>=1;space--){
        for(int i=1;i<=n;i++){
        printf(" ");
    
        for(int j=1;j<=i+2;j++){
            printf("*");
        }
    
        printf("\n");
    }
    }
    
    return 0;
}