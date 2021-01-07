#include<iostream>
using namespace std;
int main()
{
	int number1,number2;
	cout<<"enter your first number:";
	cin>>number1; 				//get first number
	cout<<"enter your second number:";
	cin>>number2;				//get seond number
	(number1%2==0)? cout<<"first number is even\n": cout<<"first number is odd\n"; 			//checking first number is even or odd
	(number2%2==0)? cout<<"second number is even\n": cout<<"second number is odd\n";	   			// checking first number is even or odd
	(number1%number2==0)? cout<<"first number is completely divisible by second number\n" : cout<<"first number is not completely divisibe by second number\n";				//if first is completely divisible by second
return 0;
}  
