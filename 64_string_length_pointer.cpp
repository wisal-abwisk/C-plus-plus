<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
	char string[50];
	char *str_ptr;
	int str_length = 0;
	cout<<"Enter your string to find the length : ";
	cin >> string;
	
	str_ptr = &string[0];
	
	if (*str_ptr != '\0')	//loop will not run for null values
	{
		for (int i = 0; *(str_ptr + i) != 0; i++) 
		{
			*(str_ptr + i) = string[i];
			str_length++;
		}
	}
	
	cout<<"The length of the string is :"<<str_length<<endl;
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
	char string[50];
	char *str_ptr;
	int str_length = 0;
	cout<<"Enter your string to find the length : ";
	cin >> string;
	
	str_ptr = &string[0];
	
	if (*str_ptr != '\0')	//loop will not run for null values
	{
		for (int i = 0; *(str_ptr + i) != 0; i++) 
		{
			*(str_ptr + i) = string[i];
			str_length++;
		}
	}
	
	cout<<"The length of the string is :"<<str_length<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
