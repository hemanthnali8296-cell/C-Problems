#include <stdio.h>
int main() {
    int a;
    int b;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    if(a<b){
        printf("Greater:%d",b);
    }else{
        printf("Greater:%d",a);
    }
    
    return 0;
}