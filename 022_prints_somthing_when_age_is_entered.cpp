#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age<18)
	{
	    cout<<"you are a child"<<endl;
	}
	else if(age<65)
	{
	    cout<<"you are an adult\t ghabrana nahi"<<endl;
	}
	else
	{
	    cout<<"you are a senior citizen"<<endl;
	}
	
return(age);
}	
