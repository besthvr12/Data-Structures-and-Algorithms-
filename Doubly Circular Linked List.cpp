#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node* head;
struct Node* tail;
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
		tail=newnode;
		return;
	}
	struct Node* temp=head;
	newnode->next=temp;
	temp->prev=newnode;
	head=newnode;
	tail->next=head;		
}
void print(){
	struct Node* temp=head;
	while(temp->next!=head){
		printf("%d\n",temp->data);
		temp=temp->next;
	}printf("%d",temp->data);
}

void insertatnth(int x,int n){
	struct Node* newnode=getnewnode(x);
	
		newnode->data=x;
		if(n==1){
		newnode->next=head;
		newnode->prev=NULL;		
		head=newnode;
		tail=newnode;
		return;
	}
	int i;
	struct Node* temp=head;
	for(i=0;i<n-2;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->prev=temp;	
}
void deleteatlast(){
	struct Node* temp2=tail;
	tail=temp2->prev;
	tail->next=head;
	temp2->prev=NULL;
	temp2->next=NULL;
	free(temp2);
}
void deleteatbegin(){
	struct Node* temp=head;
	head=temp->next;
	head->prev=NULL;
	tail->next=head;
	temp->next=NULL;
	free(temp);
}

void insertatlast(int x){
	struct Node* newnode=getnewnode(x);
		if(head==NULL){
		newnode->data=x;
		head=newnode;
		tail=newnode;
		return;
	}
     tail->next=newnode;
     newnode->prev=tail;
	 tail=newnode;
	 tail->next=head;     

	
}
void deleteatnth(int pos){
	struct Node* temp=head;
	if(pos==1){
		head=temp->next;
		tail->next=head;
		temp->next=NULL;
		free(temp);
		return;
	}
	int i;
	for(i=0;i<pos-2;i++){
		temp=temp->next;
	}
	struct Node* temp1=temp->next;
	temp->next=temp1->next;
	temp1->next->prev=NULL;
	free(temp1);
}












int main(){
	int choice,n,i,d;
	printf("\nEnter 1:Insert at beginning\n");
	printf("\nEnter 2:Insert at last\n");
	printf("\nEnter 3:Dlt Insert at nth\n");
	printf("\nEnter 4:Dlt at beginning\n");
	printf("\nEnter 5:Dlt at last\n");
	printf("\nEnter 6:Insert at nth\n\n\n");
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
head=NULL;
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
         
        printf("\nNext Program\n");
        head=NULL;
		   case 6: 
 	  insertatnth(5,1);
	insertatnth(4,2);
	insertatnth(7,3);
	insertatnth(9,3);
	print();
         break;}
	return 0;
}

		
