#include<stdio.h>
#include<string.h>
int main(){
    char ch[20];
    char vowels[]="aeiouAEIOU";
    int count=0;
    int i,j;
    fgets(ch,20,stdin);
    for(i=0;ch[i]!='\0';i++){
        for(j=0;vowels[j]!='\0';j++){
            if(ch[i]==vowels[j]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}