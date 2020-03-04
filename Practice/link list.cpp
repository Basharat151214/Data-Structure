#include<iostream>

using namespace std;


	class link{
		private:
			
			struct node{
	 	int info;
	 	node *next;	 	
	 };
	
			node *head;
			node *temp1;
			node *temp2;		
		
		public:
			link(){
				head = NULL;
				temp1 = NULL;
				temp2 = NULL;	
			}
			
		
				void insert(){
					temp1 = head;
				
				if(head == NULL){
					head = new node;
					cout<<"enter info in head: "<<endl;
					cin>>head->info;
					head->next = NULL;
				}
				while(head !=NULL){
					temp2 = new node;
					cout<<"enter info in temp2: "<<endl;
					cin>>temp2->info;
					head->next = temp2;
					temp2->next = NULL;
					head = head->next;
						return;
				}
				cout<<head->info<<endl;
				head  = temp1;
				
			}

			
			
		void inserion_at_position(int key, int data){
			temp1 = head;
			
			
				
					if(head->info == data){
						temp2 = new node;
					temp2->info = key;
					temp2 = head->next;
					head->next = temp2;
				}
				
			while(head != NULL){
				if(head->info == data){
				    temp2 = new node;
					temp2->info = key;
					temp2 = head->next;
					head->next = temp2;	
				}
				
				head = head->next;
				
			}
			
			cout<<"data not exits!"<<endl;
			head = temp1;
							cout<<head->info<<endl;

			
		}
		
			void deletion(int data){
			temp1 = head;
			if(temp1->info == data){
				head = head->next;
				delete temp1;
				temp1 = head;			
			}
			
			while(temp1 != NULL){
				
				
				if(temp1->next->info = data){
					temp2 = temp1->next;
					if(temp2->next == NULL){
						temp1->next = NULL;
						delete temp2;
						temp2 = head;
					}
					temp1->next = temp1->next->next;
					delete temp2;
					temp2 = head;
				}
				temp1 = temp1->next;
			}
			
			
			if(temp1->info != data){
				cout<<"data not found"<<endl;
				}
				head = temp1;
								cout<<head->info<<endl;

		}
		
		
		
		
		
		
		
		
		
		
			
			void print(){
				head = temp1;
				while(head != NULL){
					cout<<"ye lo g: "<<head->info<<endl<<endl;
					head = head-> next;
				
				}
				head  = temp1;

			}
			
			~link(){
		
			}
			
			
	};
	

int main(){

	link link1;
	
	link1.insert();
	link1.inserion_at_position(1,1);
	link1.deletion(6);	
	link1.print();
		 

	
	return 0;
}
