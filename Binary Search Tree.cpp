#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
//Function to find minimum in a tree. 
 struct Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
struct Node* Delete(struct Node *root, int data) {
	if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted	
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct Node *temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
bool deadend(struct Node *root){
	if(root->data==1)return true;
	else if(root->data<root->left->left->data && root->left->data>root->left->left->data)return true;
	return deadend(root->left) || deadend(root->right);
	
}
int Inorder(struct Node *root,int arr[],int i) {
	if(root == NULL) return 0;
 
	Inorder(root->left,arr,i);       //Visit left subtree
	  
	Inorder(root->right,arr,i);      // Visit right subtree
}
void Postorder(struct Node *root) {
	if(root == NULL) return;

	Postorder(root->left);    // Visit left subtree
	Postorder(root->right);   // Visit right subtree
	printf("%d ",root->data); // Print data
}
void Preorder(struct Node *root)
{
if (root==NULL)
{
return;
}
printf("%d ",root->data);
Preorder(root->left);
Preorder(root->right);
}

// Function to Insert Node in a Binary Search Tree
 struct Node* Insert(Node *root, int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}
bool Search(Node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	
      struct	Node* root = NULL;
     int choice=0;     
   
             int a;
                
                	root = Insert(root,8); root = Insert(root,5);
	root = Insert(root,9); root = Insert(root,2); 
	root = Insert(root,1); root = Insert(root,7);
	return 0;}
	
	
				
           
