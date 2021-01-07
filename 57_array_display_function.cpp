<<<<<<< HEAD
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
=======
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
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
