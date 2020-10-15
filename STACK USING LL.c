#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void traverse();

struct node{
	int data;
	struct node *link;
	
};

struct node *top= NULL;


int main(){
	int ch;
	while(1){
	
	printf("\n................STACK USING LINKED LIST OPERATIONS.............\n1.PUSH\n2.POP\n3.TRAVERSE\n4.EXIT\n");
	printf("enter your choise:\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			traverse();
			break;
		case 4:
			exit(0);
			break;
		
		default:
			printf("Invalid Choise\n");
			
		
	}
	
	
	
}
}

void push(){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:\n");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
}

void pop(){
	struct node* temp;
	if(top==NULL){
		printf("Stack is empty\n");
		
	}
	else{
		temp=top;
		printf("Deleted: %d",temp->data);
		top=top->link;
		temp->link=NULL;
		free(temp);
		
	}
}

void traverse(){
	struct node*temp;
	if(top==NULL){
		printf("Stack is empty\n");
		
	}
	else{
		temp=top;
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->link;
			
		}
	}
}
