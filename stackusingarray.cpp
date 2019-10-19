#include<stdio.h>
#include<ctype.h>
# define max 100
# define post 100
int stack[max];
int top=-1;
void Push(int item){
	if(top>=max-1){
		printf("\nStack Overflow\n");
		return;
	}
	else{
		stack[++top]=item;
	}
}
int Pop(){
	int item;
	if(top<0){
		printf("\nStack Underflow");
	}
	else{
		item=stack[top];
		top=top-1;
		return item;
	}
}
void Print() {
	int i;
	printf("Stack: ");
	for(i = 0;i<=top;i++)
		printf("%d ",stack[i]);
	printf("\n");
}

int main(){
	int i,j;
	Push(2);Print();
	Push(5);Print();
	Push(10);Print();
	Pop();Print();
	Push(12);Print();
return 0;
}
