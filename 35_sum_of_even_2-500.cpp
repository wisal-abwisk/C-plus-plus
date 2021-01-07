#include<iostream>
using namespace std;
int main()
{
	int integer, sum;
	integer=2;
	sum=0;
	while(integer<=500)
	{
		sum= sum + integer;
		integer=integer+2;
	}
	cout<<"Sum is "<<sum<<endl;
return 0;
} 
