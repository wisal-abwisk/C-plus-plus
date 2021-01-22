#include<iostream>
using namespace std;
int main()
{
	int a, b;
	int *ptrA, *ptrB;
	cout<<"Enter the first integer: ";
	cin>> a;
	cout<<"Enter the second integer: ";
	cin>> b;
	ptrA = &a;
	ptrB = &b;
	cout<<"The first value is :"<<a<<"\nThe second value is :"<<b<<endl;
	cout<<"The address of first value is : "<<ptrA<<"\nThe addresss of second value is :"<<ptrB;
	
return 0;
}
