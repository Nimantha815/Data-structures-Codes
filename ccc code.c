#include<stdio.h>

int main(){
	int n;
	int sum=0;
	int i=1;
	printf("enter Number you want:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("Sum= %d",sum);
}
