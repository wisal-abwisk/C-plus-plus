<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
	char string[50];
	int length, vowel=0, consonant=0;
	char *ptr;
	cout<<"Enter your string : ";
	cin >> string;
	ptr = &string[0];
	for(int i =0; *(ptr+i) != '\0'; i++)
	{
		*(ptr+i) = string[i]; 
		switch(*(ptr+i))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel++;
			break;
			default:
				consonant++;			
		}
	}
	cout << "The number of vowels is: " << vowel << endl;
	cout << "The number of consonants is: " <<consonant << endl;
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
	char string[50];
	int length, vowel=0, consonant=0;
	char *ptr;
	cout<<"Enter your string : ";
	cin >> string;
	ptr = &string[0];
	for(int i =0; *(ptr+i) != '\0'; i++)
	{
		*(ptr+i) = string[i]; 
		switch(*(ptr+i))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowel++;
			break;
			default:
				consonant++;			
		}
	}
	cout << "The number of vowels is: " << vowel << endl;
	cout << "The number of consonants is: " <<consonant << endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
