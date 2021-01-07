#include<iostream>
using namespace std;
int main()
{
	char alphabet, yesOrNo;
	cout<<"Enter an alphabet :";
	cin>>alphabet;
	do
	{
		switch(alphabet)
		{
			case 'a' :
			cout<<"a is a vowel"<<endl;
			break;
			case 'e' :
			cout<<"e is a vowel"<<endl;
			break;
			case 'i' :
			cout<<"i is a vowel"<<endl;
			break;
			case 'o' :
			cout<<"o is a vowel"<<endl;
			break;
			case 'u' :
			cout<<"u is a vowel"<<endl;
			break;
			case 'A' :
			cout<<"A is a vowel"<<endl;
			break;
			case 'E' :
			cout<<"E is a vowel"<<endl;
			break;
			case 'I' :
			cout<<"I is a vowel"<<endl;
			break;
			case 'O' :
			cout<<"O is a vowel"<<endl;
			break;
			case 'U' :
			cout<<"U is a vowel"<<endl;
			default :
			cout<<alphabet<<" is a consonant."<<endl;
			}
		cout<<"Do you want to enter another number? (y for yes)";
		cin>>yesOrNo;
		if ( yesOrNo=='y' || yesOrNo=='Y')
		{
		cout<<"Enter an alphabet :";
		cin>>alphabet;
		}
	}
	while ( yesOrNo=='y' || yesOrNo=='Y' );
return 0;
}
