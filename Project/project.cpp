#include<iostream>
#include<string>

using namespace std;
class product{
	public:
	string name;
	int price;
	int quantity;

	
};

class Node{ 

public:

    int id;
	product p; 

    Node *left; 

    Node *right; 

    int height; 

};   
  

int height(Node *X){ 

    if (X == NULL) 

        return 0; 

    return X->height; 

} 

Node* newNode(int id,product t){                               //This  function is use for make new Node.

    Node* node = new Node();

    node->id = id; 
    node->p.name=t.name;
    node->p.price=t.price; 
    node->p.quantity=t.quantity;

    node->left = NULL; 

    node->right = NULL; 

    node->height = 1;

    return(node); 

}   

Node *rightRotate(Node *y){                          // This is for right rotation.

    Node *x = y->left; 

    Node *T2 = x->right;

    x->right = y; 

    y->left = T2; 

  

    y->height = max(height(y->left),

                    height(y->right)) + 1; 

    x->height = max(height(x->left),

                    height(x->right)) + 1;   

    return x; 

} 

Node *leftRotate(Node *x){                            // this is for Left Rotation

    Node *y = x->right; 

    Node *T2 = y->left;

    y->left = x; 

    x->right = T2; 

    x->height = max(height(x->left),    

                    height(x->right)) + 1; 

    y->height = max(height(y->left), 

                    height(y->right)) + 1;   

    return y; 

} 

int getBalance(Node *X){                                  // This is for Balancing

    if (X == NULL) 

        return 0; 

    return height(X->left) - height(X->right); 

}   

Node* insert(Node* node, int id,product p){ 

    if (node == NULL) 

        return(newNode(id,p)); 

  

    if (id < node->id) 

        node->left = insert(node->left, id,p); 

    else if (id > node->id) 

        node->right = insert(node->right, id,p); 

    else

        return node;

    node->height = 1 + max(height(node->left), 

                        height(node->right));  

    int balance = getBalance(node); 

    if (balance > 1 && id < node->left->id) 

        return rightRotate(node);

    if (balance < -1 && id > node->right->id) 

        return leftRotate(node);

    if (balance > 1 && id > node->left->id)  { 

        node->left = leftRotate(node->left); 

        return rightRotate(node); 

    }

    if (balance < -1 && id < node->right->id){ 

        node->right = rightRotate(node->right); 

        return leftRotate(node); 

    }

    return node; 

}

struct Node * minValueNode(struct Node* node)                    // this is for fin Min value naode in AVL Tree.

{

    struct Node* current = node;

    while (current->left != NULL)

        current = current->left;

  

    return current;

}

struct Node* deleteNode(struct Node* root, int id){            /// Function to deletion

                Node *temp;

    if (root == NULL)

        return root;

    if ( id < root->id )

        root->left = deleteNode(root->left, id);

    else if( id > root->id )

        root->right = deleteNode(root->right, id);

    else{

        if((root->left == NULL)||(root->right == NULL)){

            struct Node *temp = root->left ?root->left :

                                             root->right;

            if (temp == NULL){

                temp = root;

                root = NULL;

            }

            else

             *root = *temp;

            delete(temp);

        }

        else{

            struct Node* temp = minValueNode(root->right);

            root->id = temp->id;

            root->right = deleteNode(root->right, temp->id);

        }

    }

    if (root == NULL)

      return root;

    root->height = 1 + max(height(root->left),

                           height(root->right));

    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0)

        return rightRotate(root);

    if (balance > 1 && getBalance(root->left) < 0){

        root->left =  leftRotate(root->left);

        return rightRotate(root);

    }

    if (balance < -1 && getBalance(root->right) <= 0)

        return leftRotate(root);

    if (balance < -1 && getBalance(root->right) > 0){

        root->right = rightRotate(root->right);

        return leftRotate(root);

    }

    return root;

}

void preOrder(Node *root){                     ///   function for preOrder

    if(root != NULL){ 

        						cout << root->id << " ";   
								cout << root->p.name << " ";
								cout << root->p.price << " ";

        preOrder(root->left); 

        preOrder(root->right); 

    } 

}

void inOrder(Node *root){                       // function for InOrder

    if(root != NULL){ 

       

        inOrder(root->left);

                                cout <<"\t\t"<< root->id << " ";   
								cout <<"\t"<< root->p.name << " ";
								cout <<"\t"<<root->p.price << " ";
								cout <<"\t"<<root->p.quantity << " ";
								cout<<endl;
        inOrder(root->right); 

    } 

}
void searchN(Node *root,int key){                 // function for Search Product ID and Name
    if(root != NULL){ 

        searchN(root->left,key);
if(root->id==key){
	cout<<root->p.name;
}
        searchN(root->right,key); 

    } 
    

}
int searchP(Node *root,int key){               // Function for Search Product
    if(root != NULL){ 

        searchP(root->left,key);
if(root->id==key){
	cout<<root->p.price;
}
        searchP(root->right,key); 

    } 
}

int main(){ 

    Node *root = NULL;
    
    cout<<"\n\t\t\t*********************************";
	cout<<"\n\t\t\t*SUPERMARKET MANAGEMENT PROJECT *";
	cout<<"\n\t\t\t*********************************";
	
	
	cout<<"\n\n\n\n\t\tMade By:";
	cout<<" Basharat Hussain"<<endl;
	cout<<"\t\tRoll no. P17-6102";
	cout<<"\n\n\n\t\t\tPress any digit to further continue!!\n\n"<<endl;
    
    
    
    while(1){
    	int d;
	cout<<"\n\n\n\t\tEnter (1) to add Product"<<endl;
	cout<<"\t\tEnter (2) to Display all Products"<<endl;
	cout<<"\t\tEnter (3) to Delete a Product"<<endl;
	cout<<"\t\tEnter (4) to buy Products"<<endl;
	cout<<"\t\tEnter (5) to Exit"<<endl;
	cin>>d;
	if(d==1){
	product t;
	int b;
	cout<<"\n\t\tEnter product ID:- ";
	cin>>b;
	cout<<"\t\tEnter product Name:- ";
    cin>>t.name;
    cout<<"\t\tEnter Price:- ";
    cin>>t.price;
    cout<<"\t\tEnter product Quantity:- ";
    cin>>t.quantity;
	root=insert(root,b,t);
	cout<<"\n\n\t\t\tThis product is Inserted!\n\n\n";
	}
	else if(d==2){
			cout << "\n\n\t\tID "<< " ";   
			cout << "\tNAME" << " ";
			cout << "\tPRICE" << " ";
			cout << "\tQUANTITY" << " \n";		
		 inOrder(root);
	}
	else if(d==3){
		int a;
		cout<<"\n\t\tEnter Product ID to delete"<<endl;
		cin>>a;
		root=deleteNode(root,a);
		
	}
	else if(d==4){                                                          //  This is for Buying a Products
		int bid,tprice=0,qty,inc[10]={0},qt[10]={0},i=0,lprice;
		char check='y';
		if(root==NULL){
			cout<<"No items to buy!"<<endl;

			return 0;
		}
		while(check=='y'){
		
		cout<<"\n\t\tEnter Product ID to Buy:- ";
		cin>>bid;
		cout<<"\n\t\tEnter Quantity:- ";
		cin>>qty;
		lprice=searchP(root,bid)*qty;
		tprice=tprice+lprice;
		cout<<"\t\t\t\t\t Total Price:-\t"<<tprice;
		
		cout<<"\n\n\tWant to buy another item? press (Y)"<<endl;
		cin>>check;
		inc[i]=bid;
		qt[i]=qty;
		i++;
		}
		i=0;
			cout << "\n\n\t\tID "<< " ";   
			cout << "\tNAME" << " ";
			cout << "\tPRICE" << " ";
			cout << "\tQUANTITY" << " \n";
		while(i<=10 && inc[i]!=0 ){
								cout <<"\t\t"<< inc[i] << " ";   
								cout <<"\t"; searchN(root,inc[i]); cout<< " ";
								cout <<"\t"; searchP(root,inc[i]); cout<< " ";
								cout <<"\t"<<qt[i]<< " \n";
								i++;
			
		}		
		
		
	}
	else if(d==5){
		return 0; 
	}
    

}

    return 0; 

} 
