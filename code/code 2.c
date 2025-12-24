#include <stdio.h>
int main() {
    //Your Code goes here!
    char  x;
    printf("x:");
    scanf("%c",&x);
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("vowels");
    }else{
        printf("consonants");  
    }
    return 0;
}