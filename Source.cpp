#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//1 
void towerOfHanoi(int n, char bar_1,
				  char bar_3, char remaining_bar) 
{ 
	if (n == 1) 
	{ 
		cout << "Move disk 1 from bar " << bar_1 << 
			" to bar " << bar_3<<endl; 
		return; 
	} 
	towerOfHanoi(n - 1, bar_1, remaining_bar, bar_3); 
	cout << "Move disk " << n << " from bar " << bar_1 <<
		" to bar " << bar_3 << endl; 
	towerOfHanoi(n - 1, remaining_bar, bar_3, bar_1); 
} 

//2 Divisors of a natural number
void get_divisors(int n) {
	int i;
	double sqrt_of_n = sqrt(n);

	for (i = 2; i <= sqrt_of_n; i++)
		if (n % i == 0) {   // If i divides n evenly,
			cout << i << ", ";    //   Print i,
			get_divisors(n / i);  //   Factor n/i,
			return;               //   and exit.
		}

		// If no divisor is found, then n is prime;
		//  Print n and make no further calls.

		cout << n;
}
//3
// Decimal to binary conversion
// using recursion
int find(int decimal_number)
{
	if (decimal_number == 0) 
		return 0; 
	else
		return (decimal_number % 2 + 10 * find(decimal_number / 2));
}
//4Sum of natural numbers
int add(int x)
{
	if(x!= 0)
		return x + add(x - 1);
	return 0;
}
//5.Maximum in an array

int findMax(int A[], int n) 
{ 
	// if size = 0 means whole array has been traversed 
	if (n == 1) 
		return A[0]; 
	return max( A[n-1], findMax(A, n-1) ); 
} 

//6

int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}


//7
int find_length (char str[], int index)
{
	int l = 0;

	if (str[index] == '\0')
		return l;
	else
		l ++;

	find_length (str, index + 1);
}

//8

// Function to find first uppercase letter in a string
char first(string str,int i=0)
{
	if(str[i]=='\0')
		return 0;
		if (isupper(str[i]))
			return str[i];
	return first(str,i+1);
}
//9

// function to print Minimum element using recursion 
int findMin(int A[], int n) 
{ 
	// if size = 0 means whole array has been traversed 
	if (n == 1) 
		return A[0]; 
	return min( A[n-1], findMin(A, n-1) ); 
} 
//10sorting 456789987654
void printnum ( int begin )
{
	cout<< begin;
	if ( begin < 9 )         // The base case is when begin is greater than 9
	{                           //  for it will not recurse after the if-statement
		printnum ( begin + 1 ); 
	}
	cout<< begin;         // Outputs the second begin, after the program has
	//  gone through and output
}


//11.sum of digits
int sum_of_digit(int n) 
{ 
	if (n == 0) 
		return 0; 
	return (n % 10 + sum_of_digit(n / 10)); 
} 
//12
// Returns true if n is prime, else 
// return false. 
// i is current divisor to check.  
bool isPrime(int n, int i = 2) 
{ 
	// Base cases 
	if (n <= 2) 
		return (n == 2) ? true : false; 
	if (n % i == 0) 
		return false; 
	if (i * i > n) 
		return true; 

	// Check for next divisor 
	return isPrime(n, i + 1); 
} 

//13
int fib(int x) {
	if((x==1)||(x==0)) {
		return(x);
	}else {
		return(fib(x-1)+fib(x-2));
	}
}
int main(){
	int m;
	cout<<"RECURSIVE FUNCIONS\n";

	cout<<"\n1.Tower of Hanoi game "
		<<"\n2.Divisors of a natural number "
		<<"\n3.Decimal to binary conversion"
		<<"\n4.Sum of natural numbers"
		<<"\n5.Maximum in an array"
		<<"\n6.Greatest common divisor"
		<<"\n7.Length of a string"
		<<"\n8.Find the uppercase letter in a string"
		<<"\n9.Minimum in an Array"
		<<"\n10.Increment and decrement of n numbers"
		<<"\n11.Sum of digits"
		<<"\n12.Prime or not"
		<<"\n13.Fibonacci series";


	cout<<"\nEnter a number from 1 to 13:  "<<endl;

	cin>>m;
	switch(m){
	case 1:{
		int n = 4; // Number of disks 
		towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of bars
		return 0; 
		system("pause");
		return 0; 

		   };break;
	case 2:{ 
		int n = 0;

		cout << "\nEnter a number and press ENTER: ";
		cin >> n;
		get_divisors(n);
		cout << endl;
		system("pause");
		return 0;
		   };break;
	case 3:{
		int decimal_number;
		cout<<"\n Give the value of a decimal number to get its binary value: ";
		cin>>decimal_number;

		cout<<find(decimal_number);
		cout<<"\n\n";
		system("pause");
		return 0;

		   };break;
	case 4:{
		int x;
		cout << "\nEnter a positive integer: ";
		cin >> x;
		cout << "\nSum =  " << add(x);
		system("pause");
		return 0;
		   };break;

	case 5:{
		cout<<"\nA[] = {3, 4, 145, 6, -50, 10, 2}\n";
		int A[] = {3, 4, 145, 6, -50, 10, 2}; 
		int n = 7; 
		cout <<"\nMaximum: "<<  findMax(A, n); 
		system("pause");
		return 0;

		   };break;
	case 6:{
		int a,b;

		cout << "Input first number: ";
		cin >> a;
		cout << "Input second number: ";
		cin >> b;

		cout << "Greatest common divisior (GCD) is " << gcd(a,b) << endl;
		system("pause");
		return 0;
		   };break;
	case 7:{

		char str[100];
		int len = 0;

		cout<<"Enter the string: \n";
		cin>>str;


		   };break;
	case 8:{
		string str = "programming Language";
		char res = first(str);
		if (res == 0)
			cout << "No uppercase letter";
		else
			cout << res << "\n";
		system("pause");
		return 0;

		   };break;
	case 9:{
		cout<<"\nA[] = {1, 4, 45, 6, -50, 10, 2}\n";
		int A[] = {1, 4, 45, 6, -50, 10, 2}; 
		int n = 7; 
		cout <<"\nMinimun: "<<  findMin(A, n); 
		system("pause");
		return 0;

		   };break;
	case 10:{

		printnum(4);
		system("pause");
		return 0;
			};break;
	case 11:{
		int num = 12345; 
		int result = sum_of_digit(num); 
		cout<<"Sum of digits in "<<num<<" is: "<<sum_of_digit(num);


		system("pause");
		return 0;

			};break;
	case 12:{
		int n;
		cout<<"\nGive the value of n:  ";
		cin>>n;
		if (isPrime(n)) 
			cout << "Yes"; 
		else
			cout << "No"; 
		system("pause");
		return 0;
			};break;
	case 13:{
		int x , i=0;
		cout << "Enter the number of terms of series : ";
		cin >> x;
		cout << "\nFibonnaci Series : ";
		while(i < x) {
			cout << " " << fib(i);
			i++;
		}
		return 0;
			};break;
	}
	
	system("pause");
	return 0;
}