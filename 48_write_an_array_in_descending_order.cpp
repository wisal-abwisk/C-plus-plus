<<<<<<< HEAD
//i200697 task02 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	int temp,size=20;
	int B[size]={10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	cout<<"The array before :";
	
	//loop for showing the original array
	
	for(int index=0; index<size ; index++)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;	//ending the line after the output
	
	//nested loop for arranging the arrays
	
	for(int i=0; i<size; i++)	//outer loop runs 20 times
	{
		for(int j=0 ; j<size ; j++)	//innner loop runs 20 times 
		{
			if(B[j]<B[j+1])	//swapping the values if the condition is true
			{
				temp=B[j];	//temp is temporary variable that stores B[j] values
				B[j]=B[j+1];
				B[j+1]=temp;
			}
		}
	 cout<<" ";
	}
	cout<<endl;
	cout<<"\nThe array aranged in decsending  order: ";
	
	//loop for displaying the arranged array
	for(int index=0; index<size ; index++)
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
	int temp,size=20;
	int B[size]={10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	cout<<"The array before :";
	
	//loop for showing the original array
	
	for(int index=0; index<size ; index++)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;	//ending the line after the output
	
	//nested loop for arranging the arrays
	
	for(int i=0; i<size; i++)	//outer loop runs 20 times
	{
		for(int j=0 ; j<size ; j++)	//innner loop runs 20 times 
		{
			if(B[j]<B[j+1])	//swapping the values if the condition is true
			{
				temp=B[j];	//temp is temporary variable that stores B[j] values
				B[j]=B[j+1];
				B[j+1]=temp;
			}
		}
	 cout<<" ";
	}
	cout<<endl;
	cout<<"\nThe array aranged in decsending  order: ";
	
	//loop for displaying the arranged array
	for(int index=0; index<size ; index++)
	{
		cout<<B[index]<<" ";
	}
	cout<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
