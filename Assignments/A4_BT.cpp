#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct node{
	int value;
	node *left;
	node *right;
	
};

class BT{
	private:
		node *temp;
		
	public:
		 node *root;
		 int num;
		 
		 
		 BT(){
		 	root = NULL;
		 	temp =NULL;
		 }
		 
		 ////////////////////////////// Qoestion 7 //////////////////////////////////////////////////////////////////////////////////
		 //////////////////////////// Write a function which tells either the given Binary Tree is BST or not?///////////////////////
		 
void check(node *temp){
		  	if (temp!= NULL){
		  		check(temp->left);
		  		check(temp->right);
		  		if(temp ->value< temp->right->value && temp ->value > temp ->right->value){
		  			cout<<"the tree is BST "<<endl;
				  }
				  else if (temp->left !=NULL && temp ->right !=NULL){
				  	cout<<"Tree is Binary tree "<<endl;
				  }
				  else
				  cout<<"The Tree is general Tree" <<endl;
				  
		  		
			  }
		  }
		  
		  
	/////////////// Question 8 /////////////////////////////////////////////////////////////////////////////
	//////////////Write a function which will search for an element in Binary tree.////////////////////////
	
void search(node *temp,int value)
	{
			if (temp == NULL)
			{
				return;
			}
			else
			{
				if (temp->value == value)
				{
					cout << "Element is  found" << endl;
					return;
				}
				else
				{
					search(temp->left,value);
					search(temp->right,value);
				}
			}
		
	}
		
		
 
};








                   ///////////////////////////Question 9 /////////////////////////////////////////
/*
Suppose the root node is ( X ) . We will construct a new root node ( Y ) . 
Then Y -> left = right subtree of X and Y -> right = left subtree of X . 
We will follow this procedure for all other nodes of the original tree recursively. 
1. first of all we Call Mirror for left-subtree    i.e., Mirror(left-subtree)
2. And then we Call Mirror for right-subtree  i.e., Mirror(right-subtree)
3.  at last we Swap left and right subtrees with wach other like.
          temp = left-subtree
          left-subtree = right-subtree
          right-subtree = temp
          */
          
          
          
          
          
          
          
          

		///////////////////////// Question 10 ////////////////////////////////////////////////////////////////
		///////////////////////// check if two trees are mirror of each other///////////////////////////////// 
		
		
int areMirror(node* a, node* b) 
{ 
	
	if (a==NULL && b==NULL) 
		return true; 
	if (a==NULL || b == NULL) 
		return false; 

	return a->value == b->value && 
			areMirror(a->left, b->right) && 
			areMirror(a->right, b->left); 
} 

node* newNode(int value) 
{ 
	node* node1 = new node; 
	node1->value = value; 
	node1->left = node1->right = NULL; 
	return(node1); 
}

int main() 
{ 
	node *a = newNode(1); 
	node *b = newNode(1); 
	a->left = newNode(2); 
	a->right = newNode(3); 
	a->left->left = newNode(4); 
	a->left->right = newNode(5); 
	b->left = newNode(3); 
	b->right = newNode(2); 
	b->right->left = newNode(5); 
	b->right->right = newNode(4); 

	if(areMirror(a, b)){
		cout << "Yes they are mirrors of each other.";
		 }
		else
		 cout << "No they are not mirrors of each other."; 

	return 0; 
} 
