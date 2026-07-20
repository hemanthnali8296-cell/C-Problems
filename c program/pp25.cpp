#include<stdio.h>
int main(){
	char line[81],charecter;
	int c;
	c=0;
	printf("Enter text.press<return> at end\n");
	do{
		charecter = getchar();
		line[c] = charecter;
		c++;
	}
	while(charecter!='\n');
	c-=1;
	line[c] = '\0';
	printf("\n %s \n",line);
}
