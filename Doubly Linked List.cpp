#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node* head;
struct Node* getnewnode(int x){
struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=x;
newnode->next=NULL;
newnode->prev=NULL;
return newnode;  	
}
void insertatlist(int x){
	struct Node* newnode=getnewnode(x);
	if(head==NULL){
		newnode->data=x;
		head=newnode;
		return;
	}
	struct Node* temp=head;
	newnode->next=temp;
	temp->prev=newnode;
	head=newnode;
	
	
}
void print(){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}


void deleteatbegin(){
	struct Node* temp=head;
	struct Node* temp1=head->next;
	if(head==NULL)
	return;
	head=temp->next;
	temp1->prev=NULL;
	temp->next=NULL;
	free(temp);
	
}

void insertatlast(int x){
	struct Node* newnode=getnewnode(x);
	if(head==NULL){
		newnode->data=x;
		head=newnode;
		return;
	}
	struct Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	newnode->prev=temp;
	temp->next=newnode;
	
}
void insertatnth(int x,int n){
	struct Node* newnode=getnewnode(x);
	if(n==1){
		newnode->next=head;
		head=newnode;
		return;
	}
	struct Node* temp=head;
	for(int i=0;i<n-2;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
}

void deleteatlast(){
	struct Node* temp=head;
	if(head==NULL)
	return;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	struct Node* temp2=temp->prev;
	temp2->next=NULL;
	temp->prev=NULL;
	free(temp);
	
}
void deleteatnth(int position){
	struct Node* temp=head;
	if(position==1){
		struct Node* temp1=head;
		 head=temp1->next;
	     head->prev=NULL;
	     temp1->next=NULL;
		 free(temp1);
	}
	int i;
	for(i=0;i<position-2;i++){
		temp=temp->next;
	}
	struct Node* temp1=temp->next;
	temp->next=temp1->next;
	temp->next->prev=temp;
		free(temp1);
	
}







int main(){
	int choice,n,i,d;
	printf("\nEnter 1:Insert at beginning\n");
	printf("\nEnter 2:Insert at last\n");
	printf("\nEnter 3:Insert at nth\n");
	printf("\nEnter 4:Dlt at beginning\n");
	printf("\nEnter 5:Dlt at last\n");
	printf("\nEnter 6:Dlt at nth\n\n\n");
	scanf("%d",&choice);
	switch(choice){
	case 1: 
	     printf("enter the number of elemens\n");
	     scanf("%d",&n);
	     
		 for(i=0;i<n;i++){
		 scanf("%d",&d);
		 insertatlist(d);}
	print();
	printf("\nNext Program\n");
    case 2:
    printf("enter the number of elemens\n");
	     scanf("%d",&n);
	     
		 for(i=0;i<n;i++){
		 scanf("%d",&d);
		 insertatlast(d);}
	print();
		head=NULL;
printf("\nNext Program\n");
     case 3:
     insertatnth(5,1);
	insertatnth(4,2);
	insertatnth(7,3);
	insertatnth(9,3);
	print();
	head=NULL;
printf("\nNext Program\n");

   case 4:
   	printf("enter the number of element of circular linked list:\n");
	scanf("%d",&n);
	printf("enter the elements of circular linked list\n");
	for(i=0;i<n;i++){
		scanf("%d",&d);
		insertatlist(d);
	}
	printf("Elements of circular linked list are:\n");
	print();
	deleteatbegin();
	printf("\nAfter deleting at first positon\n");
	print();
		head=NULL;
printf("\nNext Program\n");
	  case 5:
             printf("enter the number of elemens\n");
             scanf("%d",&n);

                 for(i=0;i<n;i++){
                 scanf("%d",&d);
                 insertatlast(d);}
                 print();
            printf("\nAfter dlt:\n");
           deleteatlast();
           print();
           	head=NULL;
       printf("\nNext Program\n");
		   case 6: 
 	  printf("enter the number of element of circular linked list:\n");
	scanf("%d",&n);
	printf("enter the elements of circular linked list\n");
	for(i=0;i<n;i++){
		scanf("%d",&d);
		insertatlast(d);
	}
	print();
	printf("\nEnter Position You want to delete\n");
	scanf("%d",&n);
	deleteatnth(n);
	printf("\nAfter deleting :\n");
	print();
         break;}
	return 0;
}
