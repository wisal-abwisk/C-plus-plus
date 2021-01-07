<<<<<<< HEAD
//spider shape
#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

void stem(int startrow, int startcol, int endrow, int endcol, char pistill[][40]);
void line_45 (int startrow, int startcol, int endrow, int endcol,char pistill[][40]);
void line_135 (int startrow, int startcol,int endrow , int endcol ,char pistill[][40]);
void line_0 (int startrow, int startcol, int endrow, int endcol, char pistill[][40]); 
void line_vert (int startrow, int startcol, int endrow, int endcol, char pistill[][40]);

int main()
{
		int startrow, startcol;
		char pistill[25][40];
		
		//*******14,22 is the centre point of the fireworks**********
		cout<<"*******WELCOME TO FIREWORKS*****\nPress The Enter To See The Fire Works <-'";
		cin.ignore();
		
		//printing the stem 
		stem ( 11 , 21 , 16 , 23 , pistill );
		
		//printing the first line
		line_135( 5  , 15  , 8 , 20 , pistill);	
		line_0( 4 , 11 , 4 , 14, pistill);
		line_45( 5 , 10 , 8 , 7 , pistill);
		
		
		//printing the second line
		line_135( 8  , 15  , 16 , 22 , pistill);	
		line_0( 8 , 11 , 8 , 14, pistill);
		line_45( 9 , 10 , 12 , 6 , pistill);
		
		//printing the third line
		line_135( 12  , 16  , 14 , 19 , pistill);	
		line_0( 12 , 11 , 12 , 15, pistill);
		line_45( 12 , 11 , 16 , 6 , pistill);

		//printing the fourth line
		line_0( 16 , 17 , 16 , 20, pistill);	
		line_45( 16 , 17 , 24 , 14 , pistill);
		line_vert( 20, 13, 22 , 13, pistill);
				
		//printing the fifth line
		line_45( 5 , 29 , 7 , 24 , pistill);
		line_0( 4 , 30 , 4 , 33 , pistill);
		line_135(  5 , 34  , 8 , 37 , pistill);	
		
		//printing the sixth line
		line_45( 9 , 28 , 14 , 24 , pistill);
		line_0( 8, 29 , 8 , 33, pistill);
		line_135( 9  , 34  , 14 , 38 , pistill);	
		
		//printing the seventh line
		line_135( 12  , 34  , 16 , 38 , pistill);	
		line_0( 12 , 29 , 12 , 33, pistill);
		line_45( 12 , 28 , 16 , 24 , pistill);
		
		//printing the eighth line
		line_0( 16 , 24 , 16 , 28, pistill);
		line_135( 17  , 29  , 19 , 31 , pistill);	
		line_vert( 20, 32 , 22 ,32, pistill);
		
		//checking the places where there is no stars and giving spaces to those places
		for( int row=0; row<25; row++)
		{
			for( int col=0; col<40; col++)
			{
				if(pistill[row][col] != '*')
				{
					pistill[row][col]= ' ';
				}
			}
		}
		
		//printing all those positions where there is star
		for( int row=0; row<25; row++)
		{
			for( int col=0; col<40; col++)
			{
				_sleep(1);
				cout<<pistill[row][col];
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
=======
//spider shape
#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

void stem(int startrow, int startcol, int endrow, int endcol, char pistill[][40]);
void line_45 (int startrow, int startcol, int endrow, int endcol,char pistill[][40]);
void line_135 (int startrow, int startcol,int endrow , int endcol ,char pistill[][40]);
void line_0 (int startrow, int startcol, int endrow, int endcol, char pistill[][40]); 
void line_vert (int startrow, int startcol, int endrow, int endcol, char pistill[][40]);

int main()
{
		int startrow, startcol;
		char pistill[25][40];
		
		//*******14,22 is the centre point of the fireworks**********
		cout<<"*******WELCOME TO FIREWORKS*****\nPress The Enter To See The Fire Works <-'";
		cin.ignore();
		
		//printing the stem 
		stem ( 11 , 21 , 16 , 23 , pistill );
		
		//printing the first line
		line_135( 5  , 15  , 8 , 20 , pistill);	
		line_0( 4 , 11 , 4 , 14, pistill);
		line_45( 5 , 10 , 8 , 7 , pistill);
		
		
		//printing the second line
		line_135( 8  , 15  , 16 , 22 , pistill);	
		line_0( 8 , 11 , 8 , 14, pistill);
		line_45( 9 , 10 , 12 , 6 , pistill);
		
		//printing the third line
		line_135( 12  , 16  , 14 , 19 , pistill);	
		line_0( 12 , 11 , 12 , 15, pistill);
		line_45( 12 , 11 , 16 , 6 , pistill);

		//printing the fourth line
		line_0( 16 , 17 , 16 , 20, pistill);	
		line_45( 16 , 17 , 24 , 14 , pistill);
		line_vert( 20, 13, 22 , 13, pistill);
				
		//printing the fifth line
		line_45( 5 , 29 , 7 , 24 , pistill);
		line_0( 4 , 30 , 4 , 33 , pistill);
		line_135(  5 , 34  , 8 , 37 , pistill);	
		
		//printing the sixth line
		line_45( 9 , 28 , 14 , 24 , pistill);
		line_0( 8, 29 , 8 , 33, pistill);
		line_135( 9  , 34  , 14 , 38 , pistill);	
		
		//printing the seventh line
		line_135( 12  , 34  , 16 , 38 , pistill);	
		line_0( 12 , 29 , 12 , 33, pistill);
		line_45( 12 , 28 , 16 , 24 , pistill);
		
		//printing the eighth line
		line_0( 16 , 24 , 16 , 28, pistill);
		line_135( 17  , 29  , 19 , 31 , pistill);	
		line_vert( 20, 32 , 22 ,32, pistill);
		
		//checking the places where there is no stars and giving spaces to those places
		for( int row=0; row<25; row++)
		{
			for( int col=0; col<40; col++)
			{
				if(pistill[row][col] != '*')
				{
					pistill[row][col]= ' ';
				}
			}
		}
		
		//printing all those positions where there is star
		for( int row=0; row<25; row++)
		{
			for( int col=0; col<40; col++)
			{
				_sleep(1);
				cout<<pistill[row][col];
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
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
