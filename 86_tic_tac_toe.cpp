#include<iostream>
using namespace std;

void print_grid(char array[]);

int main()
{
	const int max_turns = 9;
	char yesOrNo;	//this checks whether a user wants to retry the game or not
	bool winner1 = false, winner2 = false;
	int position, turns = 0;
	int position_X, position_O;
	
	cout<<"\n\t*********WELCOME TO TIC TAC TOE Wisal Khan*********"<<endl;;
	cout<<"\n\tYou Are Playing Multiplayer"<<endl;
	do
	{
		char array[max_turns] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
		while(turns < max_turns)
		{
			print_grid( array );
				
			cout << "\n\nPlayer 1, Enter your position: ";
			cin >> position;
			array[position - 1] = 'X';
			turns++;
			print_grid( array );
			
			if((array[0] == 'X' && array[1] == 'X' && array[2] == 'X') || (array[3] == 'X' && array[4] == 'X' && array[5] == 'X') || (array[6] == 'X' && array[7] == 'X' && array[8] == 'X') || (array[0] == 'X' && array[3] == 'X' && array[6] == 'X') || (array[1] == 'X' && array[4] == 'X' && array[7] == 'X') || (array[2] == 'X' && array[5] == 'X' && array[8] == 'X') || (array[0] == 'X' && array[4] == 'X' && array[8] == 'X') || (array[2] == 'X' && array[4] == 'X' && array[6] == 'X'))
			{
				cout << "\n\nPlayer 1 is the winner\n";
				print_grid( array );
				break;
			}
			if(turns < max_turns)	//take position of O from user
			{
				cout << "\n\nPlayer 2, Enter your position: ";
				cin >> position;
				array[position - 1] = 'O';
				turns++;
			}
			if( turns < max_turns && (array[0] == 'O' && array[1] == 'O' && array[2] == 'O') || (array[3] == 'O' && array[4] == 'O' && array[5] == 'O') || (array[6] == 'O' && array[7] == 'O' && array[8] == 'O') || (array[0] == 'O' && array[3] == 'O' && array[6] == 'O') || (array[1] == 'O' && array[4] == 'O' && array[7] == 'O') || (array[2] == 'O' && array[5] == 'O' && array[8] == 'O') || (array[0] == 'O' && array[4] == 'O' && array[8] == 'O') || (array[2] == 'O' && array[4] == 'O' && array[6] == 'O'))
			{
				cout << "\n\nPlayer 2 is the winner\n";
				print_grid( array );
				break;
			}
			// maximum turns are 9, it'll be draw on 9
			if (turns == max_turns)
			{
				cout << "\n\nThe match is drawn\n";
				print_grid( array );
			}
		}
		cout << "\n\tDo you want to try Again? (y/n) : ";
		cin >> yesOrNo;
	}
	while ( yesOrNo == 'y' || yesOrNo == 'Y');
return 0;
}
void print_grid(char array[])
{
	cout << "|'" << array[0] << "'  '" << array[1] << "'  '" << array[2] << "'|\n|'" << array[3] << "'  '" << array[4] << "'  '" << array[5] << "'|\n|'" << array[6] << "'  '" << array[7] << "'  '" << array[8] << "'|\n";
}
