#include <stdio.h>
#include<string.h>
int main() {
    char ch[100];
      fgets(ch,sizeof(ch),stdin);
      strupr(ch);
      printf("%s",ch);
    
    return 0;
}