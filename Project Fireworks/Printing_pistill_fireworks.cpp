/*
National University of Computer & Emerging Sciences
Computer Science Department
****************************************
CL-118 Programming Fundamentals Project(Printing fireworks)
****************************************

MEMBERS :-  Yasin Jodat    (20I-2416)
		    Muhammad Wisal (20I-0697)
*******************************

Assigned Shape:- pistil (The dense central sphere with line going out of it)
*******************************

Timestamp:- 11/28/2020 13:51:39
*******************************
*/
#include<iostream>
#include<cstdlib>
using namespace std;

void stem(int startrow, int startcol, int endrow, int endcol, char pistill[][40]);	//this function wil be called only once beause it prints the centre of the firewors in recctangular form
void line_45 (int startrow, int startcol, int endrow, int endcol,char pistill[][40]); // this funtion will be called whereever the 45 degrees line is used.
void line_135 (int startrow, int startcol,int endrow , int endcol ,char pistill[][40]);//this funtion will be called whereever the 135 degrees line is used.
int main()
{
		int startrow, startcol;
		const int total_rows = 25, total_col = 40;
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

		
		//printing the left first line
		line_135( 5  , 15  , 8 , 20 , pistill);
		
		//printing the left second line
		stem( 13  , 14  , 13 , 22 , pistill);
		
		//printing the left third line
		line_45( 16  , 20  , 20 , 15 , pistill);
				
		//printing the right first line
		line_45( 5 , 29 , 7 , 24 , pistill);	
		
		//printing the right second line
		stem(13, 24 , 13 , 30 , pistill);
		
		//printing the right third line
		line_135( 16  , 24  , 19 , 29 , pistill);
		
		//printing the upper vertical line
		stem( 5, 22 ,22, 22 ,pistill);
		
		//checking for the places where there are no stars and giving spaces to those places
		for( int row=0; row<total_rows; row++)
		{
			for( int col=0; col<total_col; col++)
			{
				(pistill[row][col] != '*')? pistill[row][col] = ' ' : '*';	//giving space character to the places where there isn't any star, so it doesn't print any garbage value
			}
		}
		//After all the function calling above, we have assigned asteriks to all the positions where stars are needed
		/**********************************************************
			Printing all those positions where there is star
		***********************************************************/
		for( int row=0; row<total_rows; row++)
		{
			for( int col=0; col<total_col; col++)
			{
				_sleep(1);	//for delay
				cout<<pistill[row][col]<<"  ";	//the space is enhance the shape
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


/*************************************************
				END OF PROJECT
**************************************************/
