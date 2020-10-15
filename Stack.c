#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push(int);
int pop(void);
int isfull(void);
int isempty(void);
int traverse(void);
void peek(void);

void main(){
	
	while(1){
	
	int ch,element,item;
	printf("1. push\n");
	printf("2. pop\n");
	printf("3. peek\n");
	printf("4. traverse\n");
	printf("5. quit\n");
	printf("Enter your choise:\n");
	scanf("%d",&ch);
	
	
	switch(ch){
		case 1:
			printf("Enter the value for push:\n");
			scanf("%d",&item);
			push(item);
			break;
		case 2:
			pop();
			break;	
		case 3:
			peek();
			break;
		case 4:
			traverse();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid Input\n");	
	}
}

}
void push(int element){
	
	if(isfull()){
		printf("Stack is overflow\n");
	}
	else{
		top++;
		stack[top]= element;
		printf("%d element inserted\n",element);
		
		
	}
	
	
}

int isfull(){
	if(top==CAPACITY-1){
		return 1;
	}
	else{
		return 0;
	}
}

int pop(){
	if(isempty()){
		printf("stack is underflow\n");
		return 0;
	}
	else{
		return stack[top--];
		
	}
}

int isempty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

void peek(){
	if(isempty()){
		printf("stack is underflow\n");
	}
	else{
		printf("peek element= %d\n",stack[top]);
	}
}

int traverse(){
	if(isempty()){
		printf("stack isempty\n");
	}
	else{
		int i;
		printf("stack elements are:\n");
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
