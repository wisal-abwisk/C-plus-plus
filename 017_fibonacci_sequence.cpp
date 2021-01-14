<<<<<<< HEAD
//task 04
#include<iostream>
using namespace std;
void fibonacci(int);
int main()
{
	int num, sum;
	char yesOrNo;
	do
	{	
		cout<<"Enter a number to see its value in fibonacci series:";
		cin>>num;
		fibonacci(num);
		cout<<"\nDo you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
return 0;
}
void fibonacci(int num)
{
	int sum,first=1,second=1;
	if(num==1 || num==2)
	{
		sum=1;
	}
	else
	{
		for(int i=2; i<num ; i++)
		{
			sum=first + second;
			first = second;
			second = sum;
		}
	}
	cout<<"The fibonacci number is:"<<sum<<endl;
}
=======
//task 04
#include<iostream>
using namespace std;
void fibonacci(int);
int main()
{
	int num, sum;
	char yesOrNo;
	do
	{	
		cout<<"Enter a number to see its value in fibonacci series:";
		cin>>num;
		fibonacci(num);
		cout<<"\nDo you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
return 0;
}
void fibonacci(int num)
{
	int sum,first=1,second=1;
	if(num==1 || num==2)
	{
		sum=1;
	}
	else
	{
		for(int i=2; i<num ; i++)
		{
			sum=first + second;
			first = second;
			second = sum;
		}
	}
	cout<<"The fibonacci number is:"<<sum<<endl;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
