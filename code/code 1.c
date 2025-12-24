#include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("The greater Number:%d\n",a);
    }else if (b>a){
        printf("The greater Number:%b",b);
    }
    return 0;
}