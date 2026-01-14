#include <stdio.h>
#include<string.h>
int main() {
    char ch[100],temp;
    int i,j,len;
    printf("Enter a string :");
    fgets(ch,100,stdin);
    len = strlen(ch);
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(ch[i]>ch[j]){
                temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        }
    }
    printf("sorted string:%s",ch);
    return 0;
}