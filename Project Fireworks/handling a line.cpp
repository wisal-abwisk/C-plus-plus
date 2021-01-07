//handle a line
#include<iostream>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <dos.h>
#include <windows.h>
using namespace std;
int main()
{
	/*      *
	          *
	            *
	              *
	               *
	                *
	                 *
	  		          *
	                   * 
	                    *
	                    *
	*/
	
	for( int row = 1; row <= 10; row++)
	{
		cout<<"\t\t\t";
		for( int col = 1; col<=10; col++)
		{
			if(col!=row)
			{
				cout << " " ;
				if ( col > 1 && col < 3)
				cout << "   " ;
				else if( col < 5)
				cout << "  ";
				else if ( col < 8)
				cout << " " ;	
			}
			else
			{
				cout<<"*";	
			}
		}
	_sleep(100);
	cout<<endl;
	}
	
		
return 0;
}
