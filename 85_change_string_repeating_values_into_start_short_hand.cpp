#include<iostream>
using namespace std;

void to_star_short_hand(char arr[]);

int main()
{
	char  arr[50];
	cout << "Enter The Sentence with repeating words :";
	cin >> arr;
	
	to_star_short_hand(arr);

return 0;
}

void to_star_short_hand(char arr[])
{
	char current_char;
	int current_char_count=0, i , j;
	for(i=0; arr[i]!= '\0'; i=j)	//we equal i to j because the next iteration should start from where the first character's repitions ends 
	{
		current_char = arr[i];
		for(j = i; arr[j] == current_char; j++)
		{
			current_char_count++;
		}
		
		cout << current_char;	
		
		if(current_char_count > 1)
		{
			cout<<"*"<<current_char_count;
		}
		current_char_count = 0;
	}
}
