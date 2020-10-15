#include<stdio.h>
#include<stdlib.h>
void begin();
void end();
void middle();
int length();
void display();
void deleted();

struct node{
	int data;
	struct node*next;	
};

struct node*root=NULL;
int len;
void main(){
	
	int ch;
	while(1){
	printf("Linked list operations\n 1.Add at end\n 2.Add at begin\n 3.Add middle\n 4.Length\n 5.Display\n 6.Delete\n 7.Quit\n ");
	printf("Enter your choise:\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			end();
			break;
		case 2:
			begin();
			break;
		case 3:
			middle();
			break;
		case 4:
			len=length();
			printf("Length=%d\n",len);
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
			printf("Invalid Choise\n");
	}
}
}

void end(){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node data:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(root==NULL){
		root=temp;
		
	}
	else{
		struct node*p=root;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;	
	}
}

void begin(){
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node data:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		temp->next=root;
		root=temp;
	}
	
}

int length(){
	struct node *temp;
	temp=root;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
		
	}
	return count;
}

void middle(){
	struct node*temp,*p;
	int loc,i=1;
	printf("Enter the location:\n");
	scanf("%d",&loc);
	if(loc>len){
		printf("Invalid location\n");
		printf("Currently linked list have %d nodes\n",len);
	}
	else{
		p=root;
		while(i<loc-1){
			p=p->next;
			i++;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		temp->next=p->next;
		p->next=temp;
		
	}
}

void display(){
	struct node*temp;
	temp=root;
	if(temp==NULL){
		printf("No element in the linked list\n");
	}
	else{
	while(temp!=NULL){
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("\n\n");
	
}
}

void deleted(){
	int loc;
	printf("Enter the location to delete:\n");
	scanf("%d",&loc);
	
	if(loc>len){
		printf("Invalid Location\n");
	}
	else if(loc==1){
		struct node*p;
		p=root;
		root=p->next;
		p->next=NULL;
		free(p);
	}
	else{
		struct node *p,*q;
		p=root;
		int i=1;
		while(i<loc-1){
			p=p->next;
			i++;
		}
		q=p->next;
		p->next=q->next;
		q->next=NULL;
		free(q);
	}
}
