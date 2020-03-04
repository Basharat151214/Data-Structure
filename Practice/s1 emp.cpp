#include<iostream>
#include<conio.h>
		using namespace std;
struct node
  {
	char info[15];
  };

class trial
{
   private :
		node obj1, *temp1, *temp2, *temp3;
		int I, length;
		char *p,*q;
   public :
		trial();
		~trial();   // Prototype
		void startin();
};
//-----------------------------------------------------------------
int main()
{
  trial lnk;
  lnk.startin();
  
  return 0;

}//----------------------------------------------------------------------
trial :: trial()
{
	temp1 = temp2 = temp3 = NULL;

}//--------------------------------------------------------------------
trial :: ~trial()
{
   delete temp1;
   delete temp2, temp3;
   delete[] p;          // delete 10 chars
}//--------------------------------------------------------------------
void trial :: startin()
{
   cout<<"\n Making use of \"new\" and \"delete\" is as follows.\n";
   cout<<"\n ---------------------------------------------------\n\n";
   temp1 = new node;
   temp2 = new node;
   cout<<"\n Enter information about temp1.\n";
   cin>>temp1->info;
   cout<<"\n Enter information about temp2.\n";
   cin>>temp2->info;

   temp3 = &obj1;
   cout<<"\n Enter information about temp3.\n";
   cin>>temp3->info;

   cout<<"\n Showing information of temp1.\n";
   cout<<temp1->info;
   cout<<"\n Showing information of temp2.\n";
   cout<<temp2->info;
   cout<<"\n Showing information of temp3.\n";
   cout<<temp3->info;
   cout<<"\n ---------------------------------------------------\n\n";
     cout<<" Now enter the length of character array.\n";
    cin>>length;

    p = new char[length];    //  allocate 10 chars
    q = p;
     cout<<" Now enter "<<length<<" characters to fill an array.\n";
     for( int i=0;i<length; i++ )
     {
       cin>>*p;
       p = p + 1;
     }
    p = q;
 cout<<" \nElements of array are as follows.\n";
    for( int i=0;i<length; i++ )
    {
      cout<<*p<<", ";
      p = p + 1;
    }
   p = q;

}//--- END of startin( )---------------------------------------------------------------

