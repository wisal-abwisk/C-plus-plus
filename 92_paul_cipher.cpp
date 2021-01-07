//paul cipher that capitalize small letters and ignore numbers

#include<iostream>
using namespace std;

void paul_cipher(char str[]);

int main()
{
	char str[20];
	cout<<"Enter a word : ";
	cin>>str;
	paul_cipher(str);
return 0;
}

void paul_cipher(char str[])
{
	int previous_alpha = 0;
	cout<<"The word is Paul cipher is : ";
	str[0] = int(str[0]) - 32;	//making it capital through ascii value 
	for(int i = 1; str[i] != '\0'; i++)
	{
		previous_alpha = 0;
		
		if(str[i] >= 'a' && str[i] <='z')
		{
			str[i] = (int(str[i]) - 32) + previous_alpha;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			previous_alpha = str[i];
			str[i] = int(str[i]) + previous_alpha;
		}
		else if(str[i] == int())
		{
			str[i] = str[i];
		}
	}
	for(int j = 0; str[j] != '\0'; j++)
	{
		cout<<str[j];
	}
}
