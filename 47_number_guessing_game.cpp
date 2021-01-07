<<<<<<< HEAD
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int nothing;
	char yesOrNo;
	do
	{
	srand(time(0));
	int r=rand()%50+1;
	cout<<"****WELCOME TO THE GUESSING GAME****\n_______________________"<<endl;
	cout<<"Think of a number (press enter key when you are done)";
	cin.ignore();
	cout<<"Double the number (any enter when you are done)";
	cin.ignore();
	cout<<"Now add "<<r<<" to the new number (any enter when you're done)";
	cin.ignore();
	cout<<"Divide that number by two (enter):";
	cin.ignore();
	cout<<"Now subtract the number that you had guessed at the start(enter):";
	cin.ignore();
	cout<<" The remainig amount is "<<(float)r/2<<endl;
	cout<<"\n Do you want to play again?(y for yes):";
	cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
	cout<<"********THANKS FOR PLAYING*******\n\tGOODBYE"<<endl;
	
return 0;
}
=======
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int nothing;
	char yesOrNo;
	do
	{
	srand(time(0));
	int r=rand()%50+1;
	cout<<"****WELCOME TO THE GUESSING GAME****\n_______________________"<<endl;
	cout<<"Think of a number (press enter key when you are done)";
	cin.ignore();
	cout<<"Double the number (any enter when you are done)";
	cin.ignore();
	cout<<"Now add "<<r<<" to the new number (any enter when you're done)";
	cin.ignore();
	cout<<"Divide that number by two (enter):";
	cin.ignore();
	cout<<"Now subtract the number that you had guessed at the start(enter):";
	cin.ignore();
	cout<<" The remainig amount is "<<(float)r/2<<endl;
	cout<<"\n Do you want to play again?(y for yes):";
	cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
	cout<<"********THANKS FOR PLAYING*******\n\tGOODBYE"<<endl;
	
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
