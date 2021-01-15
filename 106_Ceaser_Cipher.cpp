#include<iostream>
#include<string.h>
#include<fstream>

void print_ceaser_cipher(char [], int jump_num);

using namespace std;
int main()
{
	int jump_num;
	string str_input;
	char str[150];
	fstream write_ceaser_cipher;
	
	cout <<"Enter the String to Convert it into Ceaser Cipher : ";
	getline(cin , str_input);
	cout <<"\nEnter the jump Number :";
	cin >> jump_num;
	if(jump_num > 26)
	{
		cout << "Error! Number bigger than 26";
		return 0;
	}
	write_ceaser_cipher.open("orignal_cipher.txt", ios :: out);
	if(write_ceaser_cipher)
	{
		write_ceaser_cipher << str_input;
		write_ceaser_cipher << "  ," << jump_num<<endl;
		write_ceaser_cipher.close();
	}
	else
		cout<<"Error";
		
	strcpy(str, str_input.c_str());
	
	print_ceaser_cipher(str , jump_num);
return 0;
}

void print_ceaser_cipher(char str[], int jump_num)
{
	string ceaser_cipher;
	fstream str_input_read;
	str_input_read.open("original_cipher.txt", ios :: in);
	for(int i = 0; str[i] != '\0'; i++)
		str_input_read >> str[i];
		
		str_input_read >> jump_num;
	cout << "\nread sucessfully\n"<<endl;	
	str_input_read.close();
	
 	for (int i = 0; str[i] != '\0'; i++)
  	{
    	if(str[i] >= 'A' && str[i] <= 'Z')
    	{
    	  str[i] += jump_num;
    	  if(str[i] > 'Z')
       		str[i] -= 26;
    	}
    	if(str[i] >= 'a' && str[i] <= 'z')
    	{
    		
    		if(str[i] >= 'u')
    			str[i] -= 26;
    		if(str[i] >= 'l')
    			str[i] -= 26;
    		str[i] += jump_num;
    	    if(str[i] > 'z')
    	    	str[i] -= 26;
    	}
  	}  
  	for (int i = 0; str[i] != '\0'; i++)
  	{
    	cout << str[i];
  	}		
	
	fstream write_ceaser;
	write_ceaser.open("Ceaser_cipher.txt" , ios::out);
	write_ceaser << "\nThe Ciphered String is : ";
	for(int i = 0 ; str[i] != '\0'; i++)
	{
		write_ceaser << str[i];
	}
	write_ceaser.close();

	
}
