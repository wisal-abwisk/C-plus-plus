//handle a line
#include<iostream>
#include <cstdlib>
#include<unistd.h>

using namespace std;

char lines[10][10];

void line_1();	// "\" and "/"
void line_2();	// "/" and "\"
void curve_1(int,int);	//it prints the first curve "\"
void curve_2(int,int);	//it prints the 2nd curve "/"
void extra_spaces_curve(int);	//its an if condition that will print extra spaces to make the line curved
int main()
{
	cout<<"\n*********WELCOME TO THE FIREWORKS*********\n\nPress Enter Key To See The PISTILL Fireworks <-'";
	cin.ignore();
	cout<<"\n"<<endl;
	//line 1
	//*****************first half of the fireworks****************
		line_1();
        //**************second half of the fireworks*****************
    	line_2();
	
return 0;
}
void line_1()	//this will print "\" line and also a line below it "/"
{
	for(int i=1; i<=10 ; i++)	//outer for loop for line1
	{
		cout<<"\t\t\t"; // to drag the display to the middle
		for (int j=0; j<=i ; j++) //inner for for the first line of first half
		{
			curve_1(i,j);
			//****
		}
		
		for (int k=10; k>=i ; k--) //inner for for  the last line of first half
		{
			curve_2(i,k);
			//****
		}
	_sleep(100);
	cout<<endl;	//to transfer to next line after one iteration of outer loop for rows
    }
}
void line_2()
{
	for(int i=1; i<=10 ; i++)	//outer for loop for line2
	{
		cout<<"\t\t\t"; // to drag the display to the middle
		
		for (int j=10; j>=i ; j--) //inn
		{
			curve_1(i,j);
		}
		for (int j=0; j<=i ; j++) //inne
		{
			curve_2(i,j);
		}
	_sleep(100);
	cout<<endl;	//to transfer to next line after one iteration of outer loop for rows
    }
}

//it prints the first curve "\"
void curve_1(int i, int j)	//this function is used inside the functions like line_1 and line_2. it prints the first curve "\"
{
	if (j!=i)
	{
		extra_spaces_curve(j);
	}
	else
	{	 	
		lines[i][j]='*';
		cout<<lines[i][j]<<"   ";
		cout<<lines[i][j]<<"   ";
	}
	
}

//it prints the 2nd curve "/"
void curve_2(int i, int j)	//this function is used inside the functions like line_1 and line_2. it prints the second curve"/"
{
	
	extra_spaces_curve(j);
		
	if (j!=i)
	{
		extra_spaces_curve(j);
	}
	else
	{	 lines[i][j]='*';
		cout<<lines[i][j]<<"   ";
		cout<<lines[i][j]<<"  ";
	}
}

//its an if condition that will print extra spaces to make the line curved
void extra_spaces_curve(int j)	//its used in other functions such as curve_1 and curve_2
{
	cout<<" ";
		if (j>1 && j<3)
		cout<<"   ";
		else if (j<5)
		cout<<"  ";
		else if (j<8)
		cout<<" ";
}
