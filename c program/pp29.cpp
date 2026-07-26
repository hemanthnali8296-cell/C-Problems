#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int c,d;
	char string[]="NaliHemanthKumar";
	printf("\n\n");
	printf("------------------------\n");
	for(c=0;c<=16;c++){
	d=c+1;
	printf("%-16.*s|\n",d,string);
}

printf("------------------------------\n");

    	for(c=16;c>=0;c--){
	d=c+1;
	printf("%-16.*s|\n",d,string);
	}
	printf("------------------------------\n");

}
