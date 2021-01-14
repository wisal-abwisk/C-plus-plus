#include<iostream>
using namespace std;
int main()
{
	int number_of_rows;
	for(int i=1 ; i<=7; i++)
	{
		for(int j=7 ; j>=i ; j--)
		{
		cout<<"*";
		}
	cout<<endl;
	}
return 0;
}
