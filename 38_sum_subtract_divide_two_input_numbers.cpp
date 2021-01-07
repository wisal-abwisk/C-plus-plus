#include<iostream>
using namespace std;
int main()
{
	float number1,number2;
	char operation;
	cout<<"enter your first number:";
	cin>>number1;
	cout<<"enter your second number:";
	cin>>number2;
	cout<<"Enter the operation you want to perform (+,-,*,/):";
	cin>>operation;
		switch(operation)
		{
			case '+':
				cout<<" sum of the numbers is "<<number1+number2<<endl;
				break;
			case '-':
				cout<<" subtracting second from first gives "<<number1-number2<<endl;
				cout<<" subtracting first from second gives "<<number2-number1<<endl;
				break;
			case '*':
				cout<<" multiplying the numbers gives "<<number1*number2<<endl;
				break;
			case '/':
					(number1==0)? cout<<"divisor can't be zero\n": cout<<"dividing number2 by number1 gives "<<number2/number1<<endl;  
					(number2==0)? cout<<"divisor can't be zero\n": cout<<"dividing number1 by number2 gives "<<number1/number2<<endl;
				break;
			default:
				cout<<"invalid entry"<<endl;   
		}
return 0;
}
				
	
