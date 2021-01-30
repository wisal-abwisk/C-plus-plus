#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a;
	cout<<"\nEnter string: ";
	getline(cin, a);
	cout<<a;
	
	char array[30];
	cout<<"\nEnter array: ";
	cin.getline(array, 30,'\n');
//	cin.get(array, 30,'\n');	//the same as above
	cout <<array;
return 0;
}

