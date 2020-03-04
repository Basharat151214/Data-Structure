#include<iostream>

using namespace std;

int *current = NULL;
	int *tem = NULL;
	
	int number;
	


int main(){
	
	cin>>number;
	int get();
	void add(int, int);	
	
	current = new int[number];
	tem = current;
	for(int i = 0; i<number; i++){
		cin>>*current;
		current = current+1;
}
current = tem;




	
get();
add(700, 4);

cout<<current<<endl<<*current<<endl;



    for( int i=0;i<number; i++ )
    {
      cout<<*current<<", ";
      current = current + 1;
    }
   current = tem;


delete []current; 
	return 0;
}


int get(){
 		return *current;
	
}

void add(int x, int position) {
	int i;
	for(int i = 0; i<number; i++){
			
		if(i == position){
			*current = x;
		}
		current = current + 1;
			
 	}
		current = tem;

}




