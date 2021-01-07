#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string[50]="TheQuickBrownFoxJumpsOverTheLazyDog";
	for(int i=0; string[i]!='\0'; i++)
	{
		cout << string[i];
		if( string[i + 1] >='A' && string[i + 1]<='Z')
		{
			cout << " ";
		}
	}
return 0;
}
