#include<iostream>
using namespace std;
void display(int marks[]);
int main()
{
	int marks[5];
	for(int i=0; i< 5; i++)
	{
		cout<<"Enter the student "<<i+1<<" marks :";
		cin>>marks[i];
	}
	cout<<endl;
	display(marks);
return 0;
}
void display(int marks[])
{
	for(int i=0; i<5; i++)
	{
		cout<<"The marks of student"<<i+1<<"are :"<<marks[i]<<endl;
	}
}
