#include<iostream>
using namespace std;
int main()
{
	int weekDay;
	char yesOrNo;
	cout<<"Enter weekday's number :";
	cin>>weekDay;
	do 
	{
		switch(weekDay)
		{
			case 1 :
			cout<<"it's Monday"<<endl;
			break;
			case 2 :
			cout<<"it's Tuesday"<<endl;
			break;
			case 3 :
			cout<<"it's Wednesday"<<endl;
			break;
			case 4 :
			cout<<"it's Thursday"<<endl;
			break;
			case 5 :
			cout<<"it's Friday"<<endl;
			break;
			case 6 :
			cout<<"it's Saturday"<<endl;
			break;
			case 7 :
			cout<<"it's Sunday"<<endl;
			break;
			default :
			cout<<"wrong number! you can only enter numbers from 1 to 7";
		}
		cout<<"do you want to continue? (y for yes)";
		cin>>yesOrNo;
		if ( yesOrNo=='y' || yesOrNo=='Y')
		{
			cout<<"Enter weekday's number : ";
			cin>>weekDay;
		}
	}
	while ( yesOrNo=='y' || yesOrNo=='Y');
return 0;
}
