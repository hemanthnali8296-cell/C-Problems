#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char name[100];
//	printf("%s\n\n",strupr(strcpy(name,"Hemanth Kumar")));
  char a[6]="SSCET";
  char b[6]="SSCET";
  char c[4] = "yes";
  char d[3]="no";
  printf("\n");
  printf("Is a and b are Equal\n");
   if (strcmp(a,b)==0){
   	printf("a and b are %s ",c);
   }else{
   
   printf("a and b are %s \n",d);
}
   printf("%s",strcmp(a,b)==0?c:d);
}
