#include<stdio.h>
int main(){
	int n;
	printf("Number Of Subjects");
	scanf("%d",&n);
	char sub[n][100];
	int marks[n];
	for(int i=1;i<=n;i++){
		printf("Enter the Number of Subjects:");
		scanf("%s",sub[i]);
		printf("Eneter the %s marks:",sub[i]);
		scanf("%d",&marks[i]);
	}
		for(int i=1;i<=n;i++){
			printf("You Scored %d in %s\n",marks[i],sub[i]);
		}
		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=marks[i];
			float average;
		average=(float)sum/n;
		printf("\n\n Your average:%.2f",average);
		}
		
	
}
