#include<stdlib.h>
#include<stdio.h>
struct Node {
	int data;
	struct Node* next;
};


struct Node* head=NULL;
 void Insert(int x){
		Node* temp=(Node*)malloc(sizeof(struct Node));
	    temp->data=x;
	    temp->next=head;
	    head=temp;}
void Insertatlast(int d){
	struct Node* newnode= (struct Node*) malloc(sizeof(struct Node));
		   newnode->data=d;
			struct Node* temp=head;
	if(head==NULL){
		head=newnode;
		newnode->next=NULL;
	   return ;
	}
		while(temp->next!=NULL){
			temp=temp->next;
}
        temp->next=newnode;
        newnode->next=NULL;
    }	   
void Insertatnth(int d, int n){
		struct Node* newnode= (struct Node*) malloc(sizeof(struct Node));
		   newnode->data=d;
		   int i;
		      if(n==1){
		   	newnode->next=head;
			head=newnode;
			   return;
		   }
		 	struct Node* temp=head;
		 	for(i=2;i<n;i++){
		 		temp=temp->next;
			 }
			 newnode->next=temp->next;
			 temp->next= newnode;
} 

void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next; 
	}
}


int main(){
int n,i,d;
	int choice;
	scanf("%d",&choice);
	switch(choice){
	case 1: 
	     printf("enter the number of elemens\n");
	     scanf("%d",&n);
	     
		 for(i=0;i<n;i++){
		 scanf("%d",&d);
		 Insert(d);}
	print();
	break;
    case 2:
  printf("enter the number of elemens\n");
	     scanf("%d",&n);
	     
		 for(i=0;i<n;i++){
		 scanf("%d",&d);
		 Insertatlast(d);}
	print();
    break;
	case 3:
	Insertatnth(2,1);
    Insertatnth(3,2);
    Insertatnth(4,1);
    Insertatnth(5,2);
	print();
	break;
	default:printf("enter 1,2 or 3");
	break;   
}

	
	return 0;
}
