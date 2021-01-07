//handle a line
#include<iostream>
#include <cstdlib>
using namespace std;
void line_45_1();	// "\"
void line_45_2();	// "/"
void curve_quad_1();
void curver_quad_2();
int main()
{
	int line[10][10];
	cout<<"\n*********WELCOME TO THE FIREWORKS*********\n\nPress Enter Key To See The Fireworks <-'";
	cin.ignore();
	cout<<"\n"<<endl;
	//line 1
	//*****************first half of the fireworks****************
		line_45_1();
        //**************second half of the fireworks*****************
    	line_45_2();
	
return 0;
}
void line_45_1()	//this will print "\" line and also a line below it "/"
{
	for(int i=1; i<=10 ; i++)	//outer for loop for line1
	{
		cout<<"\t\t\t"; // to drag the display to the middle
		for (int j=0; j<=i ; j++) //inner for loop for line1
		{
			if (j!=i)
			{
				cout << " ";
			    if (j>1 && j<3)
					cout << "   ";
				else if (j<5)
					cout << "  ";
				else if (j<8)
					cout << " ";
				else
					cout<<"";
			}
			else
			{	 	
				cout<<"**   **";
			}
		}
		for (int k=10; k>=i ; k--) //inner for loop for line1
		{
				cout << " ";
			    if (k>1 && k<3)
					cout << "   ";
				else if (k<5)
					cout << "  ";
				else if (k<8)
					cout << " ";
				else
					cout<<"";
			if (k!=i)
			{
				cout << " ";
			    if (k>1 && k<3)
					cout << "   ";
				else if (k<5)
					cout << "  ";
				else if (k<8)
					cout << " ";
				else
					cout<<"";
			}
			else
			{	 	
				cout<<"**   **";
			}
		}
	_sleep(100);
	cout<<endl;	//to transfer to next line after one iteration of outer loop for rows
    }
}
void line_45_2()
{
	for(int i=1; i<=10 ; i++)	//outer for loop for line1
		{
		cout<<"\t\t\t"; // to drag the display to the middle
		
		for (int j=10; j>=i ; j--) //inner for loop for line1
		{
			if (j!=i)
			{
				cout << " ";
			    if (j>1 && j<3)
					cout << "   ";
				else if (j<5)
					cout << "  ";
				else if (j<8)
					cout << " ";
				else
					cout<<"";
			}
			else
			{	 	
				cout<<"**   **";
			}
		}
		for (int j=0; j<=i ; j++) //inner for loop for line1
		{
				cout << " ";
			    if (j>1 && j<3)
					cout << "   ";
				else if (j<5)
					cout << "  ";
				else if (j<8)
					cout << " ";
				else
					cout<<"";
			if (j!=i)
			{
				cout << " ";
			    if (j>1 && j<3)
					cout << "   ";
				else if (j<5)
					cout << "  ";
				else if (j<8)
					cout << " ";
				else
					cout<<"";
			}
			else
			{	 	
				cout<<"**   **";
			}
		}
	_sleep(100);
	cout<<endl;	//to transfer to next line after one iteration of outer loop for rows
    }
}
