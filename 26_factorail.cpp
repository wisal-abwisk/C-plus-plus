#include<iostream>
using namespace std;
int main()
{
	int fact, number;	//pNumber is positive number that the user will enter
	char yesOrNo;
	do
	{
		cout<<"Enter a positive number : ";
		cin>>number;
		if(number<0)	//number can't be negative
		{
			cout<<"Invalid Entry"<<endl;
		}
		else
		{
			if(number==0)
			{
				fact=1;	//special case for zero, zero factorial is one
			}
			else
			{
				fact=1;
				for(int i=number ; i>=1 ; i--)
				{
					fact=fact*i;
				}
			}
			cout<<"factorial of the postive number is "<<fact<<" "<<endl;
		}
	cout<<"Do you want to continue? (y for yes) : ";
	cin>>yesOrNo;
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
return 0;
}
