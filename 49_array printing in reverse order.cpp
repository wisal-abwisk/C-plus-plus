<<<<<<< HEAD
//i200697 task02 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	int temp,size=5;
	int B[size];

	for(int index=0; index<size ; index++)
	{
	cout<<"Enter element "<<index<<" :";
		cin>>B[index];
		cout<<" ";
	}
	
	//loop for showing the original array
	
	for(int index=0; index<size ; index++)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;	//ending the line after the output
	cout<<"\nThe array aranged in reverse order: ";
	
	//loop for displaying the arranged array
	for(int index=size-1; index>=0 ; index--)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;
return 0;
}
=======
//i200697 task02 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	int temp,size=5;
	int B[size];

	for(int index=0; index<size ; index++)
	{
	cout<<"Enter element "<<index<<" :";
		cin>>B[index];
		cout<<" ";
	}
	
	//loop for showing the original array
	
	for(int index=0; index<size ; index++)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;	//ending the line after the output
	cout<<"\nThe array aranged in reverse order: ";
	
	//loop for displaying the arranged array
	for(int index=size-1; index>=0 ; index--)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
