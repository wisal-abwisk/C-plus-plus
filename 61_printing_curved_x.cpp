<<<<<<< HEAD
#include<iostream>
#include<unistd.h>
#include<cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<iomanip>
using namespace std;
int size=10;
char arr_line[10][10];
void first_half();
void sec_half();
void extra_spaces ( int , int );
void curve ( int , int );
void less_curved ( int , int );
void less_extra_spaces ( int, int);
int main()
{
	cout << "***********Welcome to Fireworks***********\n\n Press Enter to see the PISTILL fireworks <-'";
	cin.ignore();
	cout << "\n\n";
	
	//First half of shape
	
	first_half();
	
	//second half of shape
	
	sec_half();
	
return 0;
}
void first_half()
{
	for (int row = 0; row <= size ; row++)
	{
		cout << setw(20);
		for (int col = 0; col <= row; col++)
		{
			curve (row,col);
		}
		
//		for (int k=1; k<=size; k++)
//		{
//			less_curved(row,k);
//		}
		
		for (int col = size ; col >= row ; col--)
		{
			extra_spaces( row , col);
			curve( row , col);
		}
	_sleep(100);
	cout << "\n";
	}
}
void sec_half()
{
	for ( int row = 0; row <= size ; row++)
	{
		cout << setw(20);
		for (int col = size ; col >= row ; col--)
		{
			curve( row , col);
		}
		
		for ( int col = 0; col <= row ; col++)
		{
			extra_spaces( row , col);
			curve( row , col);
			
		}
	_sleep(100);
	cout << "\n";
	}
}
void curve(int row, int col)
{
	if( col != row)
		extra_spaces( row , col);
			
	else
	{
		arr_line[row][col] = '*';
		cout << arr_line[row][col]<<"   "<<arr_line[row][col];
	}
}
//void less_curved( int row, int k)
//{
//	if(k != row )
//	less_extra_spaces(row,k);
//	
//	else
//	{
//		arr_line[row][k] = '*';
//		cout << arr_line[row][k]<<"   "<<arr_line[row][k];
//	}
//	
//}
void extra_spaces(int row, int col)
{
	cout << " " ;
	if ( col > 1 && col < 3)
	cout << "   " ;
	else if (col < 5)
	cout << "  " ;
	else if ( col < 8)
	cout << " " ;
}
//void less_extra_spaces( int row, int k)
//{
//	cout << " " ;
//	if( k > 1 && k < 3)
//	cout << "  ";
//	else if ( k < 5)
//	cout << " ";
//	else if ( k <8)
//	cout << " ";
//	else
//	cout << "";
//	
//}
=======
#include<iostream>
#include<unistd.h>
#include<cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<iomanip>
using namespace std;
int size=10;
char arr_line[10][10];
void first_half();
void sec_half();
void extra_spaces ( int , int );
void curve ( int , int );
void less_curved ( int , int );
void less_extra_spaces ( int, int);
int main()
{
	cout << "***********Welcome to Fireworks***********\n\n Press Enter to see the PISTILL fireworks <-'";
	cin.ignore();
	cout << "\n\n";
	
	//First half of shape
	
	first_half();
	
	//second half of shape
	
	sec_half();
	
return 0;
}
void first_half()
{
	for (int row = 0; row <= size ; row++)
	{
		cout << setw(20);
		for (int col = 0; col <= row; col++)
		{
			curve (row,col);
		}
		
//		for (int k=1; k<=size; k++)
//		{
//			less_curved(row,k);
//		}
		
		for (int col = size ; col >= row ; col--)
		{
			extra_spaces( row , col);
			curve( row , col);
		}
	_sleep(100);
	cout << "\n";
	}
}
void sec_half()
{
	for ( int row = 0; row <= size ; row++)
	{
		cout << setw(20);
		for (int col = size ; col >= row ; col--)
		{
			curve( row , col);
		}
		
		for ( int col = 0; col <= row ; col++)
		{
			extra_spaces( row , col);
			curve( row , col);
			
		}
	_sleep(100);
	cout << "\n";
	}
}
void curve(int row, int col)
{
	if( col != row)
		extra_spaces( row , col);
			
	else
	{
		arr_line[row][col] = '*';
		cout << arr_line[row][col]<<"   "<<arr_line[row][col];
	}
}
//void less_curved( int row, int k)
//{
//	if(k != row )
//	less_extra_spaces(row,k);
//	
//	else
//	{
//		arr_line[row][k] = '*';
//		cout << arr_line[row][k]<<"   "<<arr_line[row][k];
//	}
//	
//}
void extra_spaces(int row, int col)
{
	cout << " " ;
	if ( col > 1 && col < 3)
	cout << "   " ;
	else if (col < 5)
	cout << "  " ;
	else if ( col < 8)
	cout << " " ;
}
//void less_extra_spaces( int row, int k)
//{
//	cout << " " ;
//	if( k > 1 && k < 3)
//	cout << "  ";
//	else if ( k < 5)
//	cout << " ";
//	else if ( k <8)
//	cout << " ";
//	else
//	cout << "";
//	
//}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
