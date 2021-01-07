/*
National University of Computer & Emerging Sciences
Computer Science Department
****************************************
CL-118 Programming Fundamentals Project(Fireworks Drawings with Programming (Fire-DP))
****************************************

MEMBERS :-  Yasin Jodat    (20I-2416)
		    Muhammad Wisal (20I-0697)
*******************************

Assigned Shape:- pistil (The centre sphere of stars in a spherical burst shell which contains an outer sphere of stars.)
*******************************

Timestamp:- 11/28/2020 13:51:39
*******************************
*/
#include<iostream>
#include<cstdlib>
using namespace std;

void stem(int startrow, int startcol, int endrow, int endcol, char pistill[][40]);
void line_45 (int startrow, int startcol, int endrow, int endcol,char pistill[][40]);
void line_135 (int startrow, int startcol,int endrow , int endcol ,char pistill[][40]);
void line_0 (int startrow, int startcol, int endrow, int endcol, char pistill[][40]); 
void line_vert (int startrow, int startcol, int endrow, int endcol, char pistill[][40]);

int main()
{
		int startrow, startcol, total_rows = 25, total_col = 40;
		char pistill[25][40];
		
		//*******14,22 is the centre point of the fireworks**********
		cout<<"*******WELCOME TO FIREWORKS*****\nPress The Enter key To See The Fire Works <-'";
		cin.ignore();
		
		//printing the stem 
		stem ( 11 , 21 , 15 , 23 , pistill );
		
		//printing the one dot between every two lines
		line_45( 11  , 21  , 12 , 19 , pistill);
		line_135(13  , 19  , 14 , 21 , pistill);
		line_135(11  , 23  , 12 , 25 , pistill);
		line_45( 13  , 25  , 14 , 23 , pistill);

		
		//printing the first line
		line_135( 5  , 15  , 8 , 20 , pistill);
		
		//printing the second line
		line_0( 13  , 14  , 13 , 22 , pistill);
		
		//printing the third line
		line_45( 16  , 20  , 20 , 15 , pistill);
				
		//right printing the first line
		line_45( 5 , 29 , 7 , 24 , pistill);	
		
		//right printing the second line
		line_0(13, 24 , 13 , 30 , pistill);
		
		//right printing the third line
		line_135( 16  , 24  , 19 , 29 , pistill);
		
		//printing uper  lines
		line_vert( 5, 22 ,10 , 22 ,pistill);
		
		//printing lower  lines
		line_vert( 16, 22 ,22 , 22 ,pistill);
		
		
		//checking the places where there is no stars and giving spaces to those places
		for( int row=0; row<total_rows; row++)
		{
			for( int col=0; col<total_col; col++)
			{
				if(pistill[row][col] != '*')
				{
					pistill[row][col]= ' ';
				}
			}
		}
		
		//printing all those positions where there is star
		for( int row=0; row<total_rows; row++)
		{
			for( int col=0; col<total_col; col++)
			{
				_sleep(1);
				cout<<pistill[row][col]<<"  ";
			}
			cout << endl;
		}
		
			
return 0;
}

//printing the main central place or stem
void stem(int startrow, int startcol, int endrow, int endcol, char pistill[][40])
{
	for( int row=startrow; row<=endrow; row++)
	{
		for( int col=startcol; col<=endcol; col++)
		{
			pistill[row][col]='*';
		}
	}

}

//this function prints a line 45 degrees
void line_45 (int startrow, int startcol, int endrow, int endcol, char pistill[][40])
{
	for( int row=startrow,  col=startcol ; row<=endrow , col>=endcol; row++, col--)
	{
		pistill[row][col]='*';
	}
}

//this function prints a line 135 degress
void line_135 (int startrow, int startcol,int endrow, int endcol, char pistill[][40])
{
	for( int row=startrow, col=startcol; row<=endrow, col<=endcol; row++, col++)
	{
				pistill[row][col]='*';
	}
}

//this function prints a straing line
void line_0 (int startrow, int startcol, int endrow, int endcol, char pistill[][40])
{
	for( int row=startrow; row<=endrow; row++)
	{
		for( int col=startcol; col<=endcol; col++)
		{
			pistill[row][col]='*';
		}
	}
}
void line_vert (int startrow, int startcol, int endrow, int endcol, char pistill[][40])
{
	for( int row=startrow; row<=endrow; row++)
	{
		for( int col=startcol; col<=endcol; col++)
		{
			pistill[row][col]='*';
		}
	}
}
