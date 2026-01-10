#include <stdio.h>
int main() {
    char ch[50];
    int i,count=0;
    fgets(ch,50,stdin);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}