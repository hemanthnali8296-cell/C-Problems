#include <stdio.h>
#include<string.h>
int main() {
    char ch1[100],ch2[100];
    int count1[150]={0},count2[150]={0};
     printf("Enter first string:");
     fgets(ch1,100,stdin);
     printf("Enter second string:");
     fgets(ch2,100,stdin);
     if(strlen(ch1)!=strlen(ch2)){
        printf("Not Anagrams");
        return 0;
     }
     for(int i=0;ch1[i]!='\0';i++){
        count1[(int)ch1[i]]++;
         count2[(int)ch2[i]]++;
     }
     for(int i=0;i<150;i++){
        if(count1[i]!=count2[i]){
            printf("Not Anagrams");
            return 0;
        }
     }
     printf("Anagrams");
    return 0;
}