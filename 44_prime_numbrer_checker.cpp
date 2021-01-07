#include<iostream>
using namespace std;
int main()
{
	int number,factors=0;
	bool prime=true;
	cout<<"Enter a number: ";
	cin>>number;
	if(number==1 || number==0)
	{
		prime=false;
	}
	else
	{
		for(int i=3 ; i<=number/2 ; i++)
		{
			if(number%i==0)
			{
			prime=false;
			break;
			}
		}
	}
	if(prime)
	cout<<"The number is prime";
	else
	cout<<"The number isn't prime";
return 0;
}
