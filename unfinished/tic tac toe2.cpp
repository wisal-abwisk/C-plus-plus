#include<iostream>
#include<iomanip>
using namespace std;
void single_choice( char sign_choice , char arr_single[][20]);
void multi_choice( char sign_choice_1, char sign_choice_2 , char arr_multi_1[][20] , char arr_multi_2[][20]);
int main()
{
	int position,sOrm;	//s or m is for choosing multiplayer or single player
	bool retry, yesOrNo;
	char sign_choice, sign_choice_1, sign_choice_2, arr_grid[10][17], arr_multi_1[20][20], arr_multi_2[20][20], arr_single[20][20];
	do
	{
	cout<< "\n\t\t*****TIC TAC TOE GAME*****\t\n\nWhich one do you want to play\n\t1)SINGLE PALYER\n\t2)MULTI PLAYER?\nEnter Your Choice:";
	cin >> sOrm;
	cout<< endl;
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10 ; j++)
		{	
			if(j==1 || j==3 || j==6)
				arr_grid[i][j] = '|';
			else
				arr_grid[i][j]=' ';
			if(i==1 || i==4 || i==6)
				arr_grid[i][j]= '_';
			else
				arr_grid[i][j] = ' ';			
		}
	}
	for(int i=0; i<6; i++)
	{
		cout<< setw(10);
		for(int j=0; j<10; j++)
		{
			cout<< arr_grid[i][i];
		}
		cout<<endl;
	}
	
	switch(sOrm)
	{
		case 1:
			cout << "\nYou Are Playing Single PLAYER\nChoose your sign\n --> O\n --> X\nEnter choice: ";
			cin >> sign_choice;
			switch (sign_choice)
			{
				case 'X':
				case 'x':
				case 'O':
				case 'o':
					single_choice(sign_choice , arr_single);
				break;
				default:
					cout<<"you didn't enter X or O\nyou want to try again?(y for yes) :";
					cin>>yesOrNo;
			}
		break;
		case 2:
			cout<<"You Are Playing Multi PLAYER\nChoose your sign for player_1\n1)O\n2)X\nEnter choice:";
			cin>>sign_choice_1;
			
			if(sign_choice_1 == 'X' || sign_choice_1 == 'x')
			{
				sign_choice_2 = 'O';
				multi_choice( sign_choice_1, sign_choice_2 ,arr_multi_1 , arr_multi_2);
			}
			else if(sign_choice_1=='O' || sign_choice_1 == 'o')
			{
				sign_choice_2 = 'X';
			}
			else
			{
				cout<<"you didn't enter O or X\nInvalid entry!\nyou want to try again?(y for yes) :";
				cin>>yesOrNo;
			}
		break;
		default:
			cout<<"you didn't enter 1 or 2\nInvalid entry!\nyou want to try again?(y for yes) :";
			cin>>yesOrNo;
		}
	}
	while(yesOrNo == 'y' || yesOrNo == 'Y');
return 0;
}
void single_choice(char sign_choice ,  char arr_single[][20])
{
	
	cout << "fa";		

}


void multi_choice(char sign_choice_1, char sign_choice_2 ,char arr_multi_1[][20] ,char arr_multi_2[][20])
{
	if (sign_choice_1=='X' || sign_choice_1 == 'x')
	{
		cout<<"fu";
	}
	else
	{
		cout<<"fu";
	}
}
