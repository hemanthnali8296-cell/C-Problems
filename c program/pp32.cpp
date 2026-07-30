#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char c;
	
	printf("\n\n");
	for(c=65;c<=122;c=c+1){
		if(c>90&&c<97)
			continue;
			printf("|%-20d=%c\n",c,c);
	}
	printf("|\n");
}
