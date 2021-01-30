#include<iostream>
#include<string.h>
using namespace std;
void passbyreference(int *y);
inline void hello(void);
int main()
{
	int *x, y=4; 
	x = NULL;
	cout<< x;
	hello();
	passbyreference(&y);
	cout <<"\n"<<y;
return 0;
}
inline void hello(void)
{
	cout <<"\nHello";
}
void passbyreference(int *y)
{
	*y = 5*5;
}
