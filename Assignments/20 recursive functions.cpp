


//                                                          Assignment # 04                      NAME: Basharat Hussain
//                                                                                               Roll No: P17-6102
//
//
//															20 recursive functions

                                                //Function # 1

//Factorial function using recursion
int factorial(int);
int main() 
{
    int n;
    cout<<"Enter a number to find factorial: ";
    cin >> n;
    cout << "Factorial of " << n <<" = " << factorial(n);
    return 0;
}
 
int factorial(int n) 
{
    if (n > 1) 
    {
        return n*factorial(n-1);
    }
    else 
    {
        return 1;
    }
}


                                                //function # 2

//power function using recursion

int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base*calculatePower(base, powerRaised-1));
    else
        return 1;
}


                                            //function # 3

//fibonacci series function using recursion
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}


                                            //function # 4

//A function to print numbers counting down using recursion

void print(int p)
{
if (p==0)
   return;
cout<<p;
print(p-1);
return;
}

                                          //function # 5

//A function to print counting up using recursion

void print(int p)
{
if (p==0)
   return;
print(p-1);
cout<<p;
return;
}

                                           //function # 6

//A recursive function to determine if an input is prime using recursion

bool isPrime(int p, int i=2)
{
if (i==p) return 1;//or better  if (i*i>p) return 1;
if (p%i == 0) return 0;
return isPrime (p, i+1);

}

                                             //function # 7

//A function to adding up numbers from 1 to any given number using recursion

int sum (int num)
{ 
if (num==0)
return 0;
return (sum(num-1)+(num));
}

                                             //function # 8

// the second example is tail recusion because once the total is found, the function returns and 
// does not need to unravel previous recursive steps

int sum (int num, int total=0)
{ 
if (num<=0)
return total;
sum( num-1, sum );
}

                                                //function # 9

//Function to find H.C.F of numbers using recursion

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}

                                               //function # 10

//function to find sum of natural numbers using recursion

int add(int n);
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << add(n);
    return 0;
}
int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}


                                              //function # 11

//function to find H.C.F of numbers using recursion

int hcf(int n1, int n2);
int main()
{
   int n1, n2;
   cout << "Enter two positive integers: ";
   cin >> n1 >> n2;
   cout << "H.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);
   return 0;
}
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}

                                                  //function # 12

//function to find a given number is even or odd

int isEven(int n)
{
	if(n == 0)
		return 1;
	else if(n == 1)
		return 0;
	else if(n<0)
		return isEven(-n);
	else
		return isEven(n-2);		

                                             //function # 13

// function to print Minimum element using recursion 


int findMinRec(int A[], int n) 
{ 
    // if size = 0 means whole array has been traversed 
    if (n == 1) 
        return A[0]; 
    return min(A[n-1], findMinRec(A, n-1)); 
}

                                             //function # 14

// function to return maximum element using recursion 

int findMaxRec(int A[], int n) 
{ 
    // if n = 0 means whole array has been traversed 
    if (n == 1) 
        return A[0]; 
    return max(A[n-1], findMaxRec(A, n-1)); 
} 


                                           //function # 15

//function to find a string is palindrome or not

bool isPalindrome(char str[]) 
{ 
int n = strlen(str); 
  
// An empty string is  
// considered as palindrome 
if (n == 0) 
    return true; 
  
return isPalRec(str, 0, n - 1); 
} 

                                             //function # 16

//function to reverse a string using recursion

void reverse(char *str) {
   if(*str == '\0')
      return;
   else {
      reverse(str+1);
      cout<<*str;
   }

                                                //function # 17

//function to copy a string using recursion

void myCopy(char s1[], char s2[], int index = 0) 
{ 
    // copying each character from s1 to s2 
    s2[index] = s1[index];  
  
    // if string reach to end then stop  
    if (s1[index] == '\0')   
        return; 
  
    // increase character index by one 
    myCopy(s1, s2, index + 1);  
}

                                                  //function # 18

// Return sum of elements in A[0..N-1] 
// using recursion. 
int findSum(int A[], int N) 
{ 
    if (N <= 0) 
        return 0; 
    return (findSum(A, N - 1) + A[N - 1]); 
}

                                                      //function # 19
// Function to check sum of digit using recursion 

int sum_of_digit(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sum_of_digit(n / 10)); 
} 

                                                //function # 20
//function to find length of a string using recursion

int main()
{
  char a[100];
  int length;
 
  cout<<"Enter a string to calculate it's length\n";
  gets(a);
 
  length = strlen(a);
 
  cout<<"Length of the string = %d\n"<< length;
 
  return 0;
}



  
//                                    THE--****************************************************--END  













