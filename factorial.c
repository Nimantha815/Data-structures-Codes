#include<stdio.h>

int factorial(int);
int main(){
	int num,fact;
	printf("Enter the value for find the factorial:\n");
	scanf("%d",&num);
	fact=factorial(num);
	printf("\nFactorial %d= %d\n",num,fact);
}

int factorial(int n){
	int result;
	if(n==0){
		return (1);
		
	}
	else{
		result=n*factorial(n-1);
		
		return(result);
	}
}
