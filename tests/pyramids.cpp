#include <iostream>
using namespace std;

int main()
{
	
	//pyramid
    for(int i = 1; i<=9; i++)
    {
	for( int j= 1; j<=2*9-1 ; j++)
      {
      	if(j>=9-(i-1) && j<=9+(i-1))
		cout<<i;
		else
		cout<<" ";	
      }
      cout << endl;
    }    
    
    cout<<endl;
    //looping number upside down triangle
    for(int i=1; i<=10; i++)
	{
	for(int j=i; j<=10; j++)
	{
	if(j%2!=0)
	cout<<j;
	}
	cout<<"\n";
	}
	
	cout<<endl;
	//looping number upside down triangle
	for(int i=1; i<=5; i++)
	{
		for(int j=5; j>=i; j-- )
		{
			cout<<i;
		}
	cout<<endl;
	}
	
	cout<<endl;
	//looping triangle
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<j;
		}
	cout<<endl;	
	}
    return 0;
}
