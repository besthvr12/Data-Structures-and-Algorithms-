#include<stdlib.h>
#include<stdio.h>
struct Node { 
   int data; 
   struct Node *next; 
   struct Node *prev; 
}; 
struct Node* head = NULL;   
void insert(int new_data) { 
struct  Node*  new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 
void display() { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      printf("%d",ptr->data); 
      ptr = ptr->next; 
   } 
} 
void reverse(){
	struct Node* current,*prev,*next;
	current=head;
	prev=NULL;
	while(current!=NULL){
       next=current->next;
	   current->next=prev;
	   prev=current;
	   current=next;
	}head=prev;
}
int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   printf("\nBefore Reversing:\n");
   display();
   printf("\nThe linked after reversing list is: \n");
   reverse();
   display(); 
   return 0; 
} 
