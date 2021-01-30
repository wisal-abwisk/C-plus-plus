#include <iostream>

using namespace std;

#include <cstring>

int main()
{
    char str[30];
	int x=32;
	itoa(x, str, 2);
	cout<<str;

    return 0;
}