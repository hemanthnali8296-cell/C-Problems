#include<stdio.h>
#include<string.h>
int main(){
	char chk='t',str[30];
	int len,left,right;
	printf("\n Enter a String:");
	scanf("%s",str);
	len=strlen(str);
	left=0;
	right=len-1;
	while(left<right && chk=='t'){
		if(!(str[left]==str[right]))
		chk='f';
		left++;
		right--;
	}
	if(chk=='t'){
		printf("\n The String %s is a Palindrome",str);
	}else{
		printf("\n The String %s is a  Not Palindrome",str);
	}
}
