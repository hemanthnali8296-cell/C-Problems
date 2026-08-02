#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20],s3[20];
	int x;
	printf("\n\n Eneter two string constants \n");
	printf("?");
	scanf("%s %s ",s1,s2);
	//comparing s1 and s2;
	x=strcmp(s1,s2);
	if(x!=0){
		printf("\n Strings are Not Equal");
		strcat(s1,s2);
	}
	else
	printf("\n strings are Equal");
	strcpy(s3,s4);
	11=strlen(s1);
	12=strlen(s2);
	13=strlen(s3);
}
