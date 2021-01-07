<<<<<<< HEAD
//task 02
#include<iostream>
using namespace std;
void digit_name(int);
int main()
{
	int num;
	char yesOrNo;
	do
	{
		cout<<"enter a number in range(1-9) :";
		cin>>num;
		digit_name(num);
		cout<<"Do you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
return 0;
}
void digit_name(int num)
{
	switch(num)
	{
		case 1:
			cout<<" ONE\t ";
		break;
		case 2:
			cout<<" TWO\t ";
		break;
		case 3:
			cout<<" THREE\t ";
		break;
		case 4:
			cout<<" FOUR\t ";
		break;
		case 5:
			cout<<" FIVE\t ";
		break;
		case 6:
			cout<<" SIX \t";
		break;
		case 7:
			cout<<" SEVEN \t";
		break;
		case 8:
			cout<<" EIGHT\t ";
		break;
		case 9:
			cout<<" NINE\t";
		break;
		default:
			cout<<"Digit Error\n";
	}
}
=======
//task 02
#include<iostream>
using namespace std;
void digit_name(int);
int main()
{
	int num;
	char yesOrNo;
	do
	{
		cout<<"enter a number in range(1-9) :";
		cin>>num;
		digit_name(num);
		cout<<"Do you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
return 0;
}
void digit_name(int num)
{
	switch(num)
	{
		case 1:
			cout<<" ONE\t ";
		break;
		case 2:
			cout<<" TWO\t ";
		break;
		case 3:
			cout<<" THREE\t ";
		break;
		case 4:
			cout<<" FOUR\t ";
		break;
		case 5:
			cout<<" FIVE\t ";
		break;
		case 6:
			cout<<" SIX \t";
		break;
		case 7:
			cout<<" SEVEN \t";
		break;
		case 8:
			cout<<" EIGHT\t ";
		break;
		case 9:
			cout<<" NINE\t";
		break;
		default:
			cout<<"Digit Error\n";
	}
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
