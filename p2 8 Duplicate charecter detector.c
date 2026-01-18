#include <stdio.h>
#include<string.h>
int main() {
    char ch[50];
    int i,j,duplicate = 0;
    printf("Enter a string:");
    fgets(ch,sizeof(ch),stdin);
       for(i=0;i<strlen(ch);i++){
        for(j=i+1;j<strlen(ch);j++){
            if(ch[i] == ch[j]){
                duplicate =1;
                break;
            }
        }
       }
       if(duplicate){
        printf("Duplicatea found");
       }else{
        printf("No duplicates");
       }
    
    return 0;
}