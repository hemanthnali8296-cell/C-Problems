#include <stdio.h>
#include<string.h>
int main() {
    char name[20];
    int i;
     printf("Enter the coustmer name:");
     scanf("%s",&name);
     if(name[0]>='a'&&name[0]<='z'){
        name[0] = name[0]-32;
     }
     for(i=1;name[i]!='\0';i++){
        if(name[i]>='A'&&name[i]<='Z'){
            name[i] = name[i]+32;
        }
     }
     printf("%s",name);
    
    return 0;
}