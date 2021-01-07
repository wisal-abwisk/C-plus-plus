#include<iostream>
using namespace std;
int main()
{
	int num;
	int *numptr;
	cout<<" Enter a number: ";
	cin>>num;
	numptr = &num;
	cout<<" The memory address of the number is "<<&numptr;
return 0;
}
