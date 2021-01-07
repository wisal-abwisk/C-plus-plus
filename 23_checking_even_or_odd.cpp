#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter an integer:";
	cin>>number;
	if (number%2==0)
	{
	    cout<<"true"<<endl;
	}
	else if(number%2!=0)
	{
	    cout<<"false"<<endl;
	}
	else
	{
	    cout<<"invalid number"<<endl;
	}
return 0;
}
