#include<iostream>
#include<string.h>
using namespace std;

void change_into_karaca(char []);

int main()
{
	string reverse_string;
	char user_string[50];
	cout<<"Enter the string : ";
	cin>>user_string;
	change_into_karaca(user_string);
return 0;
}

void change_into_karaca(char user_string[])
{
	int str_length = 0; 
	char temp;	
	for( int i = 0 ; user_string[i] != '\0'; i++ )
	{
		str_length++;
	}
	for(int i = 0, j = str_length-1; i < str_length/2 ; i++, j--)
	{
		temp = user_string[i];
		user_string[i] = user_string[j];
		user_string[j] = temp;
	}
	for(int i = 0; user_string[i] != '\0'; i++)
	{
		if( user_string[i] == 'a' || user_string[i] == 'A')
			user_string[i] = '0';
		else if( user_string[i] == 'e' || user_string[i] == 'E')
			user_string[i] = '1';	
		else if(user_string[i] == 'i' || user_string[i] == 'I')
			user_string[i] = '2';
		else if( user_string[i] == 'o' || user_string[i] == 'O')
			user_string[i] = '2';
		else if( user_string[i] == 'u' || user_string[i] == 'U')
			user_string[i] = '3';

		cout<<user_string[i];
	}
	cout<<"aca";
}
