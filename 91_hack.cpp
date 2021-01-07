
#include <iostream>
using namespace std;
#include <unistd.h>
#include <windows.h>


int main()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	cin.ignore();
	SetConsoleTextAttribute(colors,2);
	cout << "Starting ISI hack.......\n";
	sleep(2);
	for (int i = 1; i < 11; i++)
	{
		cout << "101101100111111111110101011000001010101010011101111000000001011010101010100101010101001010\n";
		_sleep(50);
	}
	sleep(2);
	cout << "ISI hacked 10%...\n";
	sleep(2);
	for (int i = 1; i < 4; i++)
	{
		cout << "101101100111111111110101011000001010101010011101111000000001011010101010100101010101001010\n";
		_sleep(50);
	}
	sleep(2);
	cout << "ISI hacked 30%...\n";
	sleep(2);
	for (int i = 1; i < 7; i++)
	{
		cout << "101101100111111111110101011000001010101010011101111000000001011010101010100101010101001010\n";
		_sleep(50);
	}
	sleep(2);
	cout << "ISI hacked 50%...\n";
	sleep(2);
	for (int i = 1; i < 3; i++)
	{
		cout << "101101100111111111110101011000001010101010011101111000000001011010101010100101010101001010\n";
		_sleep(50);
	}
	sleep(2);
	cout << "ISI hacked 70%...\n";
	sleep(2);
	for (int i = 1; i < 4; i++)
	{
		cout << "101101100111111111110101011000001010101010011101111000000001011010101010100101010101001010\n";
		_sleep(50);
	}
	sleep(2);
	cout << "ISI hacked 99%...\n\n\n";
	sleep(4);
	cout << "Successfully hacked into ISI\n\n";
	return 0;
}

