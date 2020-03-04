#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct node
{
  int value;
  node *left;
  node *right;
};

class BST{
	private :
	    node *temp;
   public  :
	    node *root;
	    int number;
	    
	    BST()
			{
  				root=temp=NULL;
			}
			
			///////////////////////////////     a. Insertion in BST./////////////////////////////////////
			
		void Insertion(node *temp)
			{
  				if( root==NULL )
   					{
     					temp=new node;
     					temp->value = number;
     					temp->left=NULL;
     					temp->right=NULL;
     					root=temp;
     					return;
   					}

  				if( temp->value==number )
   					{
      					cout<<" Given number is already present in tree. "<<endl;
      					return;
    				}
				if(temp->value > number)
  					{
      					if( temp->left!=NULL )
       						{
		 						Insertion(temp->left);
			 						return;
       						}
      					else
       						{
	 						temp->left=new node;
	 						temp->left->value = number;
	 						temp->left->left=NULL;
	 						temp->left->right=NULL;
	 						return;
       						}
   					}
				if(temp->value < number)
   					{
      				if( temp->right!=NULL )
       					{
		 					Insertion( temp->right );
		 				return;
       					}
      				else
      				 {
	 					temp->right=new node;
	 					temp->right->value = number;
	 					temp->right->left=NULL;
	 					temp->right->right=NULL;
	 					return;
       				}
   					}

				}
				
				
				///////////////////////////   b. Deletion from BST.//////////////////////////////////// 
				
				
void delall()
	{
		int no;
		cin >> no;
		temp = head;
		temp = head;
		while (temp != NULL)
		{
			if (head->data == no)
			{
				head = temp->next;
			}

			if (head == NULL)
			{
				cout << "List is empty " << endl;
				add();
				break;
			}
			temp = temp->next;

		}

		temp = head;
		temp2 = temp->next;
		while (temp != NULL)
		{
			if (temp2->data == no)
			{
				temp->next = temp2->next;
			}
			temp2 = temp2->next;
			temp = temp->next;
		}


	}
	
	
	//////////////////////////////////   c. Finding a Value.///////////////////////////////////
	void search(node *temp,int data)
	{
			if (temp == NULL)
			{
				return;
			}
			else
			{
				if (temp->data == data)
				{
					cout << "Search found" << endl;
					return;
				}
				else
				{
					search(temp->left,data);
					search(temp->right,data);
				}
			}
		
	}
	
	
	
	
	
	
	///////////////////////////////d. Find Minimum.///////////////////////////////////////////
	
 int FindMin(node * temp)
 {
	if (temp == NULL)
	{
	return NULL;
	}
	else if(temp->Left == NULL)
	{
	return temp->value;
	}
	else
	return FindMin(temp->Left);
	}
	
	
	
	
	
	
	
	
	
	//////////////////////////////e. Delete Whole-Tree //////////////////////////////////////
	void WholeTree_del(node * temp){
		if(temp!=NULL){
			WholeTree_del(temp->left);
			WholeTree_del(temp->right);
			delete temp;
			
		}
		else
		root = NULL;
		return;
	}
	
	
	
	
	
	
	
	//////////////////////////////// f. Find Maximum. //////////////////////////////////////
	
	int FindMax(node* temp)
	{
	if (temp == NULL)
	{
	return NULL;
	}
	else if (temp->Right == NULL)
	{
	return temp->value;
	}
	else
	return FindMax(temp->Right);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	////////////////////////////// g. Traversing.////////////////////////////////////
	//////////////////////////////i. In-order. //////////////////////////////////////
	
	void inorder(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}
		else
		{
			inorder(temp->left);
			cout << temp->data << " ";
			inorder(temp->right);
		}
	}
	
	
	
	///////////////////////////ii. Pre-order.//////////////////////////////////////////
	
		void preorder(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}
		else
		{
			cout << temp->data;
			preorder(temp->left);
			preorder(temp->right);

		}
	}
	
	
	
	
	//////////////////////////iii. Post-order/////////////////////////////////////////
	
	void postorder(node *temp)
	{
		if (temp == NULL)
		{
			return;
		}
		else
		{
			postorder(temp->right);
			cout << temp->data << " ";
			postorder(temp->left);
		}
	}
};




	///////////////////////////////////////      Question 02  /////////////////////////////////////////////////////////
	////////////////////////////////////// number of nodes in Binary Tree//////////////////////////////////////////////
	
	
	int no_nodes(nodes *temp){
		
		if(temp=NULL){
			
			return NULL;
		}
		else
		
			int count = 1;
			
			count += no_nodes(temp->left);
			
			count += no_nodes(temp->right);
			
			return count;
		
	}

/////////////////////////////////////Question no 3 ////////////////////////////////////////////////////////

void breadth_first_search(struct node* root) 
{ 
	int h = height(root); 
	int i; 
	for (i=1; i<=h; i++) 
	{ 
		breadth_first_search(root, i); 
		cout<<endl; 
	} 
} 


void breadth_first_search1(struct node* root, int level) 
{ 
	if (root == NULL) 
		return; 
	if (level == 1) 
		cout<< root->data<<endl;; 
	else if (level > 1) 
	{ 
		breadth_first_search1(root->left, level-1); 
		breadth_first_search1(root->right, level-1); 
	} 
} 



int main() 
{ 
	node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 

	cout << "breadth-first traversal of binary tree is "<<endl; 
	printLevelOrder(root); 

	return 0; 
} 



////////////////////////////////////  Question no 04  ///////////////////////////////////////


#include <iostream> 
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node* left; 
	node* right; 
}; 


void printGivenLevel(node* root, int level); 
int height(node* node); 
node* newNode(int data); 

void breadth_first_search(struct node* root) 
{ 
	int h = height(root); 
	int i; 
	for (i=1; h>=i; i--) 
	{ 
		breadth_first_search(root, i); 
		cout<<endl; 
	} 
} 


void breadth_first_search1(struct node* root, int level) 
{ 
	if (root == NULL) 
		return; 
	if (level == 1) 
		cout<< root->data<<endl;; 
	else if (level > 1) 
	{ 
		breadth_first_search1(root->left, level-1); 
		breadth_first_search1(root->right, level-1); 
	} 
} 


int main() 
{ 
LL l;

	l.add();

	l.add();
	l.add();
	l.add();

	l.add();
	l.add();
	l.delall();
	l.print();
	node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 


	cout << "reverse  Order traversal of binary tree is "<<endl; 
	reverseLevelOrder(root); 

	return 0; 

} 

/////////////////////////////////// Question 05   //////////////////////////////////////////////////////////
///////////////////////////////////sum of all the nodes of BST ///////////////////////////////////////////// 

/*for finding the sum of all elements in BST 
we make a condition that if root is equal to null than print a message is that  " tree is empty".

if root is not equal to null then return that value and call that function recursivrely sum the values of  left subtree element of root 

and  right subtree element of that tree untill we reach at the leaf nodes.

by suming all the values of each nodes through recursion. 

at last we make a variable name as SUM and that is equal to above function.

*/ 

