#include<stdio.h>
#include<stdlib.h>
void addatend();
void addatbegin();
void addatafter();
int length();
void display();
void deleted();

struct node{
	int data;
	struct node* link;
};
struct node*root=NULL;
int len;

void main(){
	int ch;
	while(1){
		printf("single linked list operations\n");
		printf("1.Append\n");
		printf("2.Add at begin\n");
		printf("3.Add at after\n");
		printf("4.length\n");
		printf("5.display\n");
		printf("6.delete\n");
		printf("7.quit\n");
		
		printf("Enter the choise:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				addatend();
				break;
			case 2:
				addatbegin();
				break;
			case 3:
				addatafter();
				break;
			case 4:
				len=length();
				printf("Length:%d\n",len);
				break;
			case 5:
				display();
				break;
			case 6:
				deleted();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Invalid input\n");
		}
}
}



void addatend(){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value:\n");
	scanf("%d",&temp->data);
	
	temp->link=NULL;
	
	if(root==NULL){
		root=temp;
	}
	else{
		struct node*p;
		p=root;
		while(p->link!=NULL){
			p=p->link;
			
		}
		p->link=temp;
	}
}

int length(){
	int count=0;
	struct node*temp;
	temp=root;
	while(temp!=NULL){
		count++;
		temp=temp->link;
	}
	return count;
}

void addatbegin(){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the node data:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL){
		root=temp;
	}
	else{
		temp->link=root;
		root=temp;
	}
	
}

void display(){
	struct node* temp;
	temp=root;
	if(temp==NULL){
		printf("No element in the likked list\n");
		
	}
	else{
		while(temp!=NULL){
			printf("%d-->",temp->data);
			temp=temp->link;
		}
		printf("\n\n");
	}
	}

void deleted(){
	struct node*temp;
	int loc;
	printf("Enter the location that you want to delete:\n");
	scanf("%d",&loc);
	if(loc>length()){
		printf("Invalid Location\n");
	}
	else if(loc==1){
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else{
		struct node*p=root,*q;
		int i=1;
		while(i<loc-1){
			
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
	
	}


void addatafter(){
	struct node*temp,*p;
	int loc;
	printf("Enter a location:\n");
	scanf("%d",&loc);
	
	if(loc>length()){
		printf("Invalid location\n");
		printf("currently linked list have %d nodes\n",len);
	}
	else{
		p=root;
		int i=1;
		while(i<loc-1){
			p=p->link;
			i++;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter a node data for insert:\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		temp->link=p->link;
		p->link=temp;
		
	}	
}
