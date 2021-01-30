#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
int main()
{
	string str;
	cout<<"enter a string: ";
	getline(cin, str);
	
	ofstream write_string;
	write_string.open("file.txt", ios::out);
	if(write_string)
	{
		write_string << str;
		write_string.close();
	}
	else
	{
		cout<<"Error writing in file";
	}
return 0;
}
