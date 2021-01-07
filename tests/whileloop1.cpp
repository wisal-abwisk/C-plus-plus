#include <iostream>
using namespace std;
int main()
{
	int i=1,divby2=1,divby3=1,divby7=1;
	while(i<=100)
	{
		if(i%2==0)
		{
		divby2=divby2+1;
		}
		if( i%3==0)
		{
		divby3=divby3+1;
		}
		if( i%7==0)
		{
		divby7=divby7+1;
		}
		i++;
	}
		cout<<"divisible by 2 are "<<divby2<<endl;
		cout<<"divisible by 3 are "<<divby3<<endl;
		cout<<"divisible by 7 are "<<divby7<<endl;
return 0;
}
		
