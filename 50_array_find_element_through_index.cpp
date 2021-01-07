<<<<<<< HEAD
//i200697 task03 lab10 pf

#include<iostream>
using namespace std;
int main()
{	
	char yesOrNo;
	int Nth_entry,size=20;
	int B[size]={10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	do
	{
		yesOrNo='n';	//gave the value 'n' so that the next time it doesn't run with 'y'
		cout<<"Enter the index of a number that you want to find (0-19):";
		cin>>Nth_entry;
		if(Nth_entry==char() || Nth_entry>19 || Nth_entry<0)	//conditions on invalid entries
		{
			cout<<"The index number isn't valid'!\nDo you want to try again?(y for yes) ";
			cin>>yesOrNo;
		}
		else
		{
			cout<<"The number on Nth index is "<<B[Nth_entry];
		}
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
	
	//displaying the original array
	
	cout<<"\n\nThe Array of B is B[";
	for(int index=0; index<size; index++)
	{
		cout<<B[index]<<", ";	
	}
	cout<<"]"<<endl;
return 0;
}
=======
//i200697 task03 lab10 pf

#include<iostream>
using namespace std;
int main()
{	
	char yesOrNo;
	int Nth_entry,size=20;
	int B[size]={10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	do
	{
		yesOrNo='n';	//gave the value 'n' so that the next time it doesn't run with 'y'
		cout<<"Enter the index of a number that you want to find (0-19):";
		cin>>Nth_entry;
		if(Nth_entry==char() || Nth_entry>19 || Nth_entry<0)	//conditions on invalid entries
		{
			cout<<"The index number isn't valid'!\nDo you want to try again?(y for yes) ";
			cin>>yesOrNo;
		}
		else
		{
			cout<<"The number on Nth index is "<<B[Nth_entry];
		}
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
	
	//displaying the original array
	
	cout<<"\n\nThe Array of B is B[";
	for(int index=0; index<size; index++)
	{
		cout<<B[index]<<", ";	
	}
	cout<<"]"<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
