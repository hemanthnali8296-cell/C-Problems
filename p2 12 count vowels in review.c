#include <stdio.h>
int main() {
    char ch[100];
    int i,count=0;
    printf("Enter a comment:");
    fgets(ch,sizeof(ch),stdin);
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||
        ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'
        ||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}