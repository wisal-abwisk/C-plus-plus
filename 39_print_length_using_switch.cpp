#include<iostream>
using namespace std;
int main()
{
	int number,Length;
	cout<<"enter a number from (1 to 99999):";
	cin>>number;
	cout<<"Enter the number of digits you've entered :";
	cin>>Length;
	(number>1 && number<99999) ? cout<<"\nnumber is in range\n" : cout<<"\nnumber is not in the given range"<<endl; 		//checks the range of number entered
		switch(Length)
		{
			case 1 :
				cout<<"Length is 1\n";
			break;
			case 2 :
				cout<<"length is 2\n";
			break;
			case 3 :
				cout<<"length is 3\n";
			break;
			case 4 :
				cout<<"length is 4\n";
			break;
			case 5 :
				cout<<"length is 5\n";
			break;
			default:
			cout<<"Length given isn't valid";
		}
return 0;
}			
			
			
	
	
	
	
	
