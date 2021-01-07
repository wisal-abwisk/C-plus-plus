#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter the first number:";
	cin>>num1;
	cout<<"enter the second number:";
	cin>>num2;
	cout<<"enter the third number:";
	cin>>num3;
	if(num1==num2 && num2==num3)
	{
	    cout<<"all the numbers are the same"<<endl;
	}  
	else if (num1<num2 && num1<num3)
	{
	    cout<<num1<<"is the smallest"<<endl;
	}
	else if (num2<num1 && num2<num3)
	{
	    cout<<num2<<"is the smallest"<<endl;
	}
	else
	{
	    cout<<num3<<"is the smallest"<<endl;
	}
return 0;
}
