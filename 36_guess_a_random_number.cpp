#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int randomNumber, guessNum;
	char yesOrNo; 
	cout<<"Do YOu want to guess a Number? (y for yes)";
	cin>>yesOrNo;
	srand(time(0));
	while (yesOrNo=='y' || yesOrNo=='Y')
	{	
		randomNumber=(rand() % 100) + 1;
		cout<<"Guess what's the number :";
		cin>>guessNum;
		if (guessNum > randomNumber)
		{
			cout<<"your guessed number is too high!"<<endl;
			cout<<"the number was "<<randomNumber<<endl;
		} 
		else if (guessNum < randomNumber)
		{
			cout<<"your guessed number is too low!"<<endl;
			cout<<"the number was "<<randomNumber<<endl;
		}
		else if (guessNum == randomNumber)
		{
			cout<<"you've got it right!";
			cout<<"the number is "<<randomNumber<<endl;
		}
		else
		{
			cout<<"invalid entry!"<<endl;
		}
		cout<<"do you want to guess another number?";
		cin>>yesOrNo;
	}
return 0;
} 
