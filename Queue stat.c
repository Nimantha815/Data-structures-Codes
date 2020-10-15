#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5

int queue[CAPACITY];
int front=0,rear=0;

void insert();
void deleted();
void traverse();

int main(){
	int ch;
	while(1){
	
	printf("\n................QUEUE OPERATIONS.............\n1.Insert\n2.Delete\n3.Traverse\n4.exit\n");
	printf("enter your choise:\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			insert();
			break;
		case 2:
			deleted();
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

void insert(){
	int ele;
	
	if(CAPACITY==rear){
		printf("Queue is full\n");
	}
	
	else{
		printf("Enter the elrment to insert:\n");
		scanf("%d",&ele);
		queue[rear]=ele;
		rear++;
		
	}
	
}

void deleted(){
	int i;
	if(front==rear){
		printf("Queue is empty\n");
		
	}
	else{
		printf("Deleted: %d",queue[front]);
		for(i=0;i<rear-1;i++){
			queue[i-1]=queue[i+1];
			
		}
		rear--;
	}
	
	
}
void traverse(){
	int i;
	if(front==rear){
		printf("Queue is empty\n");
		
	}
	else{
		for(i=0;i<rear;i++){
			printf("%d ",queue[i]);
		}
	}
	
}
