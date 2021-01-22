/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 1)
   Write a C++ program that inputs any vowel (upper or lower case) from the user and
display it using *
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char vowel;
	char yesorNo;	
	do
	{
		cout<<"\n\nPlease enter a vowel :";
		cin>>vowel;
		switch(vowel)
		{
			case 'a':
			case 'A':
				for(int i=0; i<7; i++) //rows
				{
					for(int j=7 ; j>=i ; j--) //spaces for the first half
					{
						cout<<" ";
					}
						cout<<"*";
					for(int k=0; k<=2*i-1; k++) // gap inbetween and the middle line
					{
						if(i==3)	//for the middles line of A
						{
							cout<<"*";
						}
						else
						{
							cout<<" ";
						}
					}
					cout<<"*"; // stars after gap in between
				cout<<endl;
				}
			break;
			case 'E':
			case 'e':
				for(int i=1; i<=9 ; i++) 	//for max rows
				{
					if(i==2 || i==3 || i==4 || i==6 || i==7 || i==8 ) // for stars between three lines of E
					{
						cout<<"*";
					}
					for(int j=1 ; j<=7; j++)	//for max columns
					{
						if(i==1 || i==5 || i==9)	//for the three lines of E
						{
							cout<<"*";
						}
						else		//for gap between three lines
						{
							cout<<" ";
						}
					}
				
				cout<<endl;
				}  
			break;
			case 'I':
			case 'i':
				for(int i=1; i<=7; i++)	// for rows of I
				{
					cout<<"\t"; // for moving it "I" bit further
					for(int j=1; j<=5; j++)	//for columns
					{
						if(i==1 || i==7) // for first and last lines
						{
							cout<<"*";
						}
						else
						{
							if(j==3)	//for third column j which has stars
							{
								cout<<"*";
							}
							else		//any other column than 3 will be a gap
							{
								cout<<" ";
							}
						}
						
					}
				cout<<endl;	
				}
			break;
			case 'O':
			case 'o':
				for(int i=1 ; i<=6 ; i++)	// for rows
				{
					cout<<"\t";
					for(int j=1; j<=6 ;j++)	//for columns
					{
						if((i==1 || i==6) && (j==1 || j==6)) // to remove the corner stars
						{
							cout<<" ";
						}
						else
						{
							if((j==1 || j==6) || (i==1 || i==6)) // for the rows and columns where there are stars
							{
								cout<<"*";
							}
							else
							{
								cout<<" ";
							}
						}
					}
				cout<<endl;
				}
			break;
			case 'U':
			case 'u':
					for(int i=1 ; i<=6 ; i++)	// for rows
				{
					cout<<"\t";
					for(int j=1; j<=6 ;j++)	//for columns
					{
						if((i==1 || i==6) && (j==1 || j==6)) // to remove the corner stars
						{
							cout<<" ";
						}
						else
						{
							if(j==1 || j==6 || i==6) // for the last row and the columns where there are stars
							{
								cout<<"*";
							}
							else
							{
								cout<<" ";
							}
						}
					}
				cout<<endl;
				}
			break;
			default:
				cout<<vowel<<" isn't a vowel"<<endl;
		}
		cout<<"Do you want to try again? (no for exit)";
		cin>>yesorNo; 
	}
	while(yesorNo == 'y' || yesorNo == 'Y');
return 0;
}

