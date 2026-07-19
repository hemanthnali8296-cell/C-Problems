#include<stdio.h>
int main(){
	char line[80];
	scanf("%s[^abcdefghijklmnopqrstuvwxyz]",line);
	printf("%s",line);
	
}
