#include <stdio.h>
#include<string.h>
int main() {
    char ch[100];
    printf("Enter the messeage:");
    fgets(ch,sizeof(ch),stdin);
    
        if(strstr(ch,"error")!= NULL){
            printf("Found");
        }else{
            printf("Not Found");
        }
    
    
    return 0;
}