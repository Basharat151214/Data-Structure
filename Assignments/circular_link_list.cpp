


#include<iostream>
#include<string>

using namespace std;

struct fullname
{
	char fname[20];
	char lname[20];
};

struct student
{
	int roll;
	char gen;
	float gpa;
	fullname name;
	student *next;
};

class records
{
private:

	student *head;
	student *temp;

public:

	///// constructor /////

	records()
	{
		head = NULL;
	}

	///// Step 1 ////

	void insert(int r , char g , float gpa , char n[])
	{
	    int count = 0;
		int count1 = 0;
		bool condition = false;
		bool condition1 = false;
		if (head == NULL)
		{
			head = new student;
			head->roll = r;
			head->gen = g;
			head->gpa = gpa;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition == false)
				{
					head->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition == false )
				{
					condition = true;
					head->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition == true)
				{
					 head->name.lname[count] = '\n';
					  break;
				}
				 else if (condition == true)
				 {
					 head->name.lname[count] = n[i];
					 count = count + 1;
				 }
			}
			temp = head;
			head->next = temp;
			
			return;
		}
		else{

        student *temp1 = new student;
		    temp1->roll = r;
			temp1->gen = g;
			temp1->gpa = gpa;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition1 == false)
				{
					temp1->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition1 == false )
				{
					condition1 = true;
					temp1->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition1 == true)
				{
					 temp1->name.lname[count1] = '\n';
					 break;
				}
				else if (n[i]!=' ' && condition1 == true)
				 {
					 temp1->name.lname[count1] = n[i];
					 count1 = count1 + 1;
				 }
				else 
					break;
			}
			temp1->next = head;
			temp->next=temp1;
		    temp = temp1;
		}
		
			
	}

	////// Step 2: change first name ////

	void changefn()
	{
		for(temp = head->next; temp != head; temp = temp->next)
		{
			if (temp->roll == 104)
			{
				    temp->name.fname[0] = 'M';
					temp->name.fname[1] = 'i';
					temp->name.fname[2] = 'c';
					temp->name.fname[3] = 'h';
					temp->name.fname[4] = 'e';
					temp->name.fname[5] = 'a';
					temp->name.fname[6] = 'l';
					temp->name.fname[7] = '\n';
					break;
			}
		}
	}

	////// Step 3: Insert node before 102 /////

	void add_before(int r , char g , float gp , char n[])
	{
		for (temp = head->next; temp != NULL; temp = temp->next)
		{
		  if (temp->next->roll == 102)
		  {
			student *temp3 = new student;
			bool condition1 = false;
			int count1 = 0;
			temp3->roll = r;
			temp3->gen = g;
			temp3->gpa = gp;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition1 == false)
				{
					temp3->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition1 == false )
				{
					condition1 = true;
					temp3->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition1 == true)
				{
					 temp3->name.lname[count1] = '\n';
					 break;
				}
				else if (n[i]!=' ' && condition1 == true)
				 {
					 temp3->name.lname[count1] = n[i];
					 count1 = count1 + 1;
				 }
				else 
					break;
			}
			temp3->next = NULL;
			temp3->next = temp->next;
		    temp->next = temp3;
			break;
		 }
	   }
	}

	////// Step 4: Insert node after 104 /////

	void add_after(int r , char g , float gp , char n[])
	{
		
		for (temp = head; temp != NULL; temp = temp->next)
		{
		  if (temp->roll == 104)
		  {
			student *temp2 = new student;
			bool condition1 = false;
			int count1 = 0;
			temp2->roll = r;
			temp2->gen = g;
			temp2->gpa = gp;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition1 == false)
				{
					temp2->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition1 == false )
				{
					condition1 = true;
					temp2->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition1 == true)
				{
					 temp2->name.lname[count1] = '\n';
					 break;
				}
				else if (n[i]!=' ' && condition1 == true)
				 {
					 temp2->name.lname[count1] = n[i];
					 count1 = count1 + 1;
				 }
				else 
					break;
			}
			temp2->next = NULL;
			temp2->next = temp->next;
		    temp->next = temp2;
			break;
		 }
	   }
	}


	/////// Step 5: Change roll number //////

	void change()
	{
		student *search;
		for (search = head->next; search != head; search = search->next)
		{
			if (search->roll == 104)
			{
				search->roll = 110;
				break;
			}	
		}
	}

	///// Step 6: Delete node 102 ///////

	void delete_node()
	{
		student *temp4;
		for (temp = head->next; temp != NULL; temp = temp->next)
		{
			if (temp->next->roll == 102)
			{
				temp4 = temp->next;
				temp->next = temp->next->next;
				delete temp4;
				break;
			}
		}
	}

	////// Step 7: To delete node after 107 /////

	void delete_after()
	{
		student *temp4;
		for (temp = head->next; temp != NULL; temp = temp->next)
		{
			if (temp->roll == 107)
			{
				temp4 = temp->next;
				temp->next = temp->next->next;
				delete temp4;
				break;
			}
		}
	}

	///// Step 8: Delete node before 107 /////

	void delete_before()
	{
		student *temp4;
		for (temp = head->next; temp != NULL; temp = temp->next)
		{
			if (temp->next->next->roll == 107)
			{
				temp4 = temp->next;
		        temp->next = temp4->next;
				delete temp4;
				break;
			}
		}
	}

	///// Step 9: insert node at 4th position /////

	void insert4th(int r , char g , float gp , char n[])
	{
		int position = 2;
		for (temp = head->next; temp != NULL; temp = temp->next)
		{
		  if (position == 3)
		  {
			student *temp5 = new student;
			bool condition1 = false;
			int count1 = 0;
			temp5->roll = r;
			temp5->gen = g;
			temp5->gpa = gp;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition1 == false)
				{
					temp5->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition1 == false )
				{
					condition1 = true;
					temp5->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition1 == true)
				{
					 temp5->name.lname[count1] = '\n';
					 break;
				}
				else if (n[i]!=' ' && condition1 == true)
				 {
					 temp5->name.lname[count1] = n[i];
					 count1 = count1 + 1;
				 }
				else 
					break;
			}
			temp5->next = NULL;
			temp5->next = temp->next;
		    temp->next = temp5;
			break;
		 }
		  else
			  position++;
	   }
	}

	////// Step 10: delete the node in start and end /////

	void del_SE()
	{

		for (temp = head->next; temp != head; temp = temp->next)
		{
			if(temp->next==head)
			{
				student *temp4;
				temp4=head;
				head = head->next;
				temp->next = head;
				delete temp4;
				break;
			}

		}
		for (temp = head->next; temp != head; temp = temp->next)
		{
			if (temp->next->next == head)
		     {
				 student *t;
			    t = temp->next;
				temp->next = head;
				delete t;
				break;

			}
		
		}

	}

	///// Step 11A: insert node in start /////

	void insert_start(int r , char g , float gp , char n[])
	{
	   
		for (temp = head->next; temp != head; temp = temp->next)
		{
		if (temp->next == head)
		{
			 student *temp6 = new student;
			bool condition1 = false;
			int count1 = 0;
			temp6->roll = r;
			temp6->gen = g;
			temp6->gpa = gp;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition1 == false)
				{
					temp6->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition1 == false )
				{
					condition1 = true;
					temp6->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition1 == true)
				{
					 temp6->name.lname[count1] = '\n';
					 break;
				}
				else if (n[i]!=' ' && condition1 == true)
				 {
					 temp6->name.lname[count1] = n[i];
					 count1 = count1 + 1;
				 }
				else 
					break;
			}
			temp6->next = head;
			temp->next = temp6;
			head = temp6;
			break;
		}
		}
	   }
		
	////// Step 11B: insert node in end /////

	void insert_end(int r , char g , float gp , char n[])
	{
		for (temp = head->next; temp != head; temp = temp->next)
		{
		  if (temp->next == head)
		  {
		    student *temp7 = new student;
			bool condition1 = false;
			int count1 = 0;
			temp7->roll = r;
			temp7->gen = g;
			temp7->gpa = gp;
			for (int i = 0; i < 20; i++)
			{
				if (n[i] != ' ' && condition1 == false)
				{
					temp7->name.fname[i] = n[i];
				}
				else if (n[i] == ' ' && condition1 == false )
				{
					condition1 = true;
					temp7->name.fname[i] = '\n';
				}
				 else if (n[i] == ' ' && condition1 == true)
				{
					 temp7->name.lname[count1] = '\n';
					 break;
				}
				else if (n[i]!=' ' && condition1 == true)
				 {
					 temp7->name.lname[count1] = n[i];
					 count1 = count1 + 1;
				 }
				else 
					break;
			}
			temp7->next = head;
			temp->next = temp7;
			break;
		 }
	   }
		
	}

	///// Step 12: delete 2nd node /////

	void delete_2nd()
	{
		student *temp4;
			temp4 = head->next; 
			head->next = head->next->next;
			delete temp4;
			    
	}

	////// Step 13: Delete all nodes /////

	void delete_all()
	{
		student *temp4;
		while(head->next != head)
		{
			temp4 = head->next;
			head->next = temp4->next;
			if(temp4->next == head)
			{
				head = NULL;
				delete head;
				delete temp4;
				break;
			}
			delete temp4;
			
		}
	
			
		cout << "\tOps! Your Records Have Been Deleted :p" << endl;
	}

	////// Step 14: To print steps /////

	void print()
	{
		student *temped;
		temped = head;
		if (head != NULL)
		{
		do
		{
	
			cout << " " << temped->roll << " , " << temped->gen << " , " << temped->gpa << " , ";
			for(int i = 0 ; i < 20 ; i++)
			{
				if (temped->name.fname[i] != '\n')
				{
				   cout << temped->name.fname[i];
				}
				else
					break;
			}

			cout << " ";

			for(int i = 0 ; i < 20 ; i++)
			{
				if (temped->name.lname[i] != '\n')
				{
				    cout << temped->name.lname[i];
				}
				else
					break;
			}
			cout << endl;
			temped = temped->next;
		}
		while(temped != head);
		}
	}
};

void main()
{
	records sr;
	cout << endl;
	cout << "\t==============================" << endl;
	cout << endl;
	cout << "\t****** STEP 1 *******" << endl;
	cout << endl;
	sr.insert(101 , 'M' , 3.2 , "Mark Zuckerberg ");  // Step 1;
	sr.insert(102 , 'M' , 3.1 , "Bill Gates ");
	sr.insert(103 , 'F' , 2.2 , "Ada Lovelace ");
	sr.insert(104 , 'M' , 2.6 , "Steve Jobs ");
	sr.insert(105 , 'F' , 3.5 , "Arfa Karim ");
	sr.print();

	 cout << "\t****** STEP 2 *******" << endl;
	       cout << endl;
	       sr.changefn(); // STEP 2;
		   sr.print();
		   cout << endl;

		    cout << "\t****** STEP 3 *******" << endl;
		  cout << endl;
		  sr.add_before(106 , 'M' , 3.6 , "Elbert Einstien "); // Step 3;
		  sr.print();
	      cout << endl;

		  cout << "\t****** STEP 4 *******" << endl;
			cout << endl;
			sr.add_after(107 , 'M' , 3.3 , "Issac Newton "); // Step 4;
			sr.print();
	        cout << endl;

		   cout << "\t****** STEP 5 *******" << endl;
			cout << endl;
			sr.change();  // Step 5;
			sr.print();
			cout << endl;

			cout << "\t****** STEP 6 *******" << endl;
			cout << endl;
			sr.delete_node(); // Step 6;
			sr.print();
			cout << endl;

			cout << "\t****** STEP 7 *******" << endl;
			cout << endl;
			sr.delete_after();
			sr.print();

			cout << "\t****** STEP 8 *******" << endl;
			cout << endl;
			sr.delete_before(); // Step 8;
			sr.print();
			cout << endl;

			cout << "\t****** STEP 9 *******" << endl;
			cout << endl;
			sr.insert4th(604 , 'C' , 4.5 , "Noormah Omar "); // Step 9
			sr.print();
			cout << endl;

			cout << "\t****** STEP 10 *******" << endl;
			cout << endl;
			sr.del_SE(); // Step 10
			sr.print();
			cout << endl;

			cout << "\t****** STEP 11A *******" << endl;
			cout << endl;
			sr.insert_start(617 , 'F' , 2.9 , "Laiba Gul "); // step 11
			sr.print();
			cout << endl;

			cout << "\t****** STEP 11B *******" << endl;
			cout << endl;
			sr.insert_end(611 , 'F' , 2.9 , "zillay Gul "); // step 11
			sr.print();
			cout << endl;

			cout << "\t****** STEP 12 *******" << endl;
			cout << endl;
			sr.delete_2nd(); // Step 12
			sr.print();
			cout << endl;

			cout << "\t****** STEP 13 *******" << endl;
			cout << endl;
			sr.delete_all(); // Step 13
			sr.print();
			cout << endl;

	system ("pause");

}
