#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string_mail[50];
	int location_at;
	bool at_valid=false, dot_valid=false, dot_after_at=false;
	cout<<"Enter your email :";
	cin>>string_mail;
	
	if(string_mail[0] != '@' || string_mail[0] != '.')
	{
		for(int i=1; string_mail[i]!='\0'; i++)
		{
			if(string_mail[i] == '@')
			{
				at_valid= true;
				location_at = i;
			}
		}
		if(string_mail[location_at+1] != '.')
		{
			dot_after_at= true;
		}
		for(int i= location_at+2; string_mail[i]!='\0';i++ )
		{
			if(string_mail[i]=='.' && string_mail[i+1]!='\0')
			{
				dot_valid = true;
			}
		}
	}
	else
		cout<<"Invalid entry";
		
	if(at_valid== true && dot_valid== true  && dot_after_at == true)
	{
		cout<<"TRUE";
	}
	else
	{
		cout<<"FALSE";
	}
return 0;
}
