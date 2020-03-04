#include<iostream>
#include<string>

using namespace std;

struct node

{
       int value;
       node *left;
       node *right;
};

class tree
{
private:
        node *temp;
public:
        node *root;
         int no;

   tree()
{
        root = NULL;
        temp = NULL;

}

void insert(node *temp)
{
 if (root == NULL)
 {
    temp = new node;
    temp->value = no;
    temp->left = NULL;
    temp->right = NULL;
     root = temp;
     return;
 }
  if (temp->value == no)
 {
    cout << "Given number is already present in the tree  " << endl;
    return;
  }
    if (no < temp->value)
   {
     if (temp->left != NULL)
      {
        insert(temp->left);
      }
    else
    {
      temp->left = new node;
	  temp->left->value = no;
	  temp->left->left = NULL;
	  temp->left->right = NULL;
	  return;
     }

   }
     if (temp->value<no)
       {
		 if (temp->right != NULL)
			 {
				 insert(temp->right);
			 }

	    else
        {
			 temp->right = new node;
			 temp->right->value = no;
			 temp->right->left = NULL;
			  temp->right->right = NULL;
			   return;
		 }
	 }

}

void pre_order(node *temp)

{                                                                                                                                                                                                                                                                                              //to print a tree on preorder
  if (root == NULL)
    {
      cout << "root iss empty " << endl;
    }
  cout << temp->value << "  ";
   if (temp->left != NULL)
   pre_order(temp->left);
    if (temp->right != NULL)
  pre_order(temp->right);
    return;
}

 void in_order(node *temp)
  {
      if (root == NULL)
		 {
			cout << "root is empty " << endl;
         }
	 if (temp->left != NULL)
         in_order(temp->left);
          cout << temp->value << "  ";
    if (temp->right != NULL)
        in_order(temp->right);
          return;

}

 void post_order(node *temp)
{
   if (root == NULL)
    {
		 cout << "root is empty " << endl;
    }
   if (temp->left != NULL)
        post_order(temp->left);
   if (temp->right != NULL)
        post_order(temp->right);
      cout << temp->value << "  ";
         return;

}
 
};                                                                                                                                              

////////// Function 1. ///////

void print_num(int num)
{
	cout << num << endl;
	if (num < 10)
	{
		print_num(num + 1);
	}
	else
	{
		return;
	}
}

////////// Function 2. ////////

int factorial(int num)
{
	if (num > 0)
		return num * factorial(num - 1);
	else
		return 1;
}

////////// Function 3. ///////

void print_str(char ch[],int n)
{
	
	if (ch[n] == '\0')
	{
		return;
	}
	else
	{
		cout << ch[n];
		print_str(ch ,n+1);
	}
}

///////// Function 4. ////////

bool search(int a[], int size, int key)
{
	if (size >= 0)
	{
		if (a[size] == key)
		{
			return true;
		}
		else
		{
			return (a, size--, key);
		}
	}
	else
	{
		return false;
	}
}

///////// Function 5. /////////

bool palindrom(string str, int i, int j)
{
	if (i<j)
	{
		if (str[i] == str[j])
		{
			return 1;
				(str, i++, j--);
		}
		else
		{
			return false;
		}
	}
	
	else
	{
		return true;
	}

}

/////////// Function 6. ////////

int power(int base, int expo)
{
	if (expo > 0)
	{
		return base * power(base, expo - 1);
	}
	else
		return 1;
}

/////////// Function 7. ///////

int even(int a)
{
	if (a == 2)
	{
		return 2;
	}
	else if (a % 2 == 0)
	{
		cout << a << endl;
		return even(a-1);
	}
	else
		return even(a-1);
}

/////// Function 8. //////

void serve(int a)
{
	if (a <= 10)
		serve(a + 1);
	else
		return;
	cout << a << endl;
}

//////// Function 9. ///////

int table(int a, int i)
{
	cout << a * i << endl;
	if (i <= 5)
	   	return table(a, i+1);
	
	
}

//////// Function 10. ///////

int sum_num(int a)
{
	if(a == 10)
	return a;
	else
	return a + sum_num(a+1);
	
}

////// Function 11. //////

int mul_num(int a)
{
	if(a == 5)
	{
	    return a;
	}
	else
	{
		return (a * mul_num(a+1));
	}
}

//////// Function 12. ////////

void rstring(char str[])
{
	if(*str == '\0')
	{
		return;
	}
	else
	{
		rstring(str+1);
		cout << *str;
	}
}

////////// Function 13. ////////

int check_num(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return 0;
	}
	else if (n<0)
	{
		return check_num(1-n);
	}
	else
		return check_num(n-2);		
}

//////////// Function 14. ////////

void printmax(int arr[], int max, int a, int s)
{
	if(a <= s)
	{
        if(arr[a] > max)
			max = arr[a];
        printmax(arr, max, a+1, s);
        return;
	}
	else
	{
		cout << "maximum is " << max << endl;
	}
}

///////// Function 15. //////

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
	else if (n == 1)
	{
		return 1;
	}
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
 
//////// Function 16. ///////

int octal(int num, int exp)
{
	if (num == 0)
	  return 0;
	else
		return (((num%10)*pow(8,exp))+octal(num/10,exp+1));
}

//////// Function 16. ///////

int binary(int num, int exp)
{
	if (num == 0)
	  return 0;
	else
		return (((num%10)*pow(2,exp))+octal(num/10,exp+1));
}

int main()
{
    tree t;
    char ch;
    int p;

	cout << "********** 1). print 0-10 numbers **********" << endl; 

	print_num(0);
	cout << endl;

	cout << "********** 2). factorial ************" << endl;

	cout << factorial(5);
	cout << endl;

	cout << "********** 3). printing char array ***********" << endl;  

	int n=0;
	char a[7] = "laiba ";
	print_str(a,n);
	cout << endl;

	cout << "********** 4). searching **********" << endl;

	int c[5] = {1,2,3,4,5};
	cout << search(c, 5 , 3);
	cout << endl;

	cout << "********** 5). palindrom ***********" << endl; 

	cout << palindrom("KAYAK" , 0 , 4);
	cout << endl;

	cout << "********** 6). power *************" << endl;

	cout << power(2,3);
	cout << endl;

	cout << "********** 7). Even numbers 10 to 0 ***********" << endl; 

	cout << even(10);
	cout << endl;

	cout << "********** 8). print 10-0 **************" << endl;

    serve(0);
	cout << endl;

	cout << "********** 9). print table upto 5 *************" << endl; 

	table(5,1);
	cout << endl;

	cout << "*********** 10). sum of first 10 numbers ***********" << endl; 

	cout << sum_num(1);
	cout << endl;

	cout << "************ 11). Multiplication of first 5 numbers ************" << endl; 

    cout << mul_num(1);
	cout << endl;

	cout << "************* 12). Reverse String *******************" << endl; 

	char str[6] = "laiba";
	rstring(str);
	cout << endl;

	cout << "************* 13). Even Odd check ***************" << endl;

	int no;
	cout << "Enter num you want to check = " << endl;
	//cin >> no;
	if (check_num(7))
		cout << "Num is Even" << endl;
	else
		cout << "Num is Odd" << endl;	
    cout<<endl;

	cout << "************* 14). Largest element of array ************" << endl; //////w

	int arr[10]={1,2,0,3,4,5,10,6,8,7};
	 printmax(arr,0,0,10);
	cout << endl;

    cout << "************** 15). fibonacci ***********" << endl; 

	int i = 0;
    cout << "\nFibonacci Series for [10] Terms as follows\n";
 
    while (i < 10)
    {
        cout << "  " << fibonacci(i);
        i++;
    }
    cout << "\n";

	cout << "************ 16). Octal to decimal *************" << endl;
       
	cout << octal(134,0);
	cout << endl;

	cout << "************ 17). Binary to decimal *****************" << endl;
    
	cout << binary(0001,0);
	cout << endl;

    cout << "************ 18). 19). 20). ************" << endl;
	cout << endl;
    cout << "enter the amount of numbers u want to enter  ";
	 cin >> p;
	 cout << endl;
     for (int i = 0; i < p; i++)
      {
        cout << "Enter a number in tree  " << endl;
        cin >> t.no;
        t.insert(t.root);
       }
     cout << "pre-order" << endl;    
     t.pre_order(t.root);
     cout << endl;
      cout << "in-order" << endl;
      t.in_order(t.root);
       cout << endl;
     cout << "post-order" << endl;
      t.post_order(t.root);
     cout << endl;

	system("pause");
	return 0;
}

