#include<iostream>
using namespace std;
int main()
{
	int mujtaba, ma;
	char name1,name2;
	cout<<"Enter your name first letter: ";
	cin>>name1;
	cout<<"Enter the other person's name's first letter': ";
	cin>>name2;
	cout<<endl;
	if(name1=='M' || name1=='m')
	{
		cout<<"You match 100%"<<endl;
	}
	else
	{
		cout<<"Stay away from her"<<endl;
	}
return 0;
}
