//i200697 task04 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	char yesOrNo;
	bool win=false;
	int size=20,guess;
	int B[size]={10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	do
	{	
		yesOrNo='n';//gave the value 'n' so that the next time it doesn't run with 'y'
		cout<<"Guess any number that you think might be inside the array (1-100):";
		cin>>guess;
		if(guess==char() || guess>100 || guess<0)
		{
			cout<<"Invalid Entry\nNumber Not In Range\nDo you Want to Try again?";
			cin>>yesOrNo;
		}
		else
		{
			for(int index=0; index<size; index++)
			{
				if(guess==B[index])
				{
					win=true;
					break;
				}
				else
				{
					win=false;
				}
			}
			if(win==true)
			{
				cout<<"\nTRUE"<<endl;
			}
			else
			{
				cout<<"\nFALSE"<<endl;
			}
			cout<<"\n Would you like to try again? (y for yes): ";
			cin>>yesOrNo;
		}
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
	//displaying the original array
	
	cout<<"\nThe Array of B is B[";
	for(int index=0; index<size; index++)
	{
		cout<<B[index]<<", ";	
	}
	cout<<"]"<<endl;
return 0;
}

