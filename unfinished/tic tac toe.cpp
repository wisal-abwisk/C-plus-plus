#include<iostream>
using namespace std;
void single_O_choice(char sign_choice);
void single_X_choice(char sign_choice );
//void multi_choice(int sign_choice);
int main()
{
	int position,sOrm;	//s or m is for choosing multiplayer or single player
	bool retry, yesOrNo;
	char sign_choice, sign_choice_1, sign_choice_2;
	cout<<"\n\t\t*****TIC TAC TOE GAME*****\t\n\nWhich one do you want to play\n\t1)SINGLE PALYER\n\t2)MULTI PLAYER?\nEnter Your Choice:";
	cin>>sOrm;
	cout<<endl;
	for(int i=1; i<=6; i++)
	{
		for(int j=1; j<=17 ; j++)
		{
			cout<<"_";
		}
		for(int j=1; j<=17; j++)
		{
			cout<<"|";
		}
	cout<<endl;
	}
	switch(sOrm)
	{
		case 1:
		do
		{
			cout<<"You Are Playing Single PLAYER\nChoose your sign\n1)O\n2)X\nEnter choice: ";
			cin>>sign_choice;
			switch(sign_choice)
			{
				case 'X':
				case 'x':
					single_X_choice(sign_choice);
				break;
				case 'O':
				case 'o':
					single_O_choice(sign_choice);
				break;
				default:
					cout<<"you didn't enter X or O\n\tRETRY!";
					retry=true;
			}
		}
		while(retry==true);
		break;
		case 2:
		do
		{
			cout<<"You Are Playing Multi PLAYER\nChoose your sign for player_1\n1)O\n2)X\nEnter choice:";
			cin>>sign_choice_1;
			
			if(sign_choice_1 == 'X' || sign_choice_1 == 'x')
				sign_choice_2 = 'O';
			else if(sign_choice_1=='O' || sign_choice_1 == 'o')
				sign_choice_2 = 'X';
			else
				cout<<"you didn't enter O or X\nInvalid entry!\nyou want to try again?(y for yes) :";
				cin>>yesOrNo;
		break;
		default:
			cout<<"you didn't enter O or X\nInvalid entry!\nyou want to try again?(y for yes) :";
			cin>>yesOrNo;
		}
		while(yesOrNo=='y' || yesOrNo == 'Y');
	}
return 0;
}
void single_O_choice(char sign_choice)
{
	if(sign_choice==1)
	{
		cout<<"fa";		
	}
	else
	{
		cout<<"fu";
	}
}
void single_X_choice(int sign_choice)
{
	if(sign_choice==1)
	{
		cout<<"fu";
	}
	else
	{
		cout<<"fu";
	}
}


void multi_choice(int sign_choice)
{
	if (sign_choice==1)
	{
		cout<<"fu";
	}
	else
	{
		cout<<"fu";
	}
}
