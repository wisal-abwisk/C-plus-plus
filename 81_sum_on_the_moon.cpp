#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char lunar_number_1[10], lunar_number_2[10], moon_number[10];
	cout<<"Enter the first Lunar Number :";
	cin >> lunar_number_1;
	cout<<"Enter the second lunar Number :";
	cin >> lunar_number_2;
	
	for(int i=0; lunar_number_1[i] != '\0'; i++)
	{
		if(lunar_number_1[i]>lunar_number_2[i])
		{
			moon_number[i]= lunar_number_1[i];
		}
		else
		{
			moon_number[i] = lunar_number_2[i];
		}
			cout<<moon_number[i];
	}
return 0;
}
