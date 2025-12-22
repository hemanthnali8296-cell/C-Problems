#include <stdio.h>
int main() {
    //Your Code goes here!
    int cost,selling;
    scanf("%d %d",&cost,&selling);
    if(selling>cost){
        printf("profit");
    }else{
        printf("lose");
    }
    return 0;
}