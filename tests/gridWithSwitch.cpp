/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 4)
*/
#include<iostream>
using namespace std;
int main()
{
	int number1, number2;
	char colour1, colour2;
	cout<<"||  1  ||  2  ||  3  ||  4  ||  5  ||  6  ||\n||  7  ||  8  ||  9  ||  10 ||  11 ||  12 ||\n";
	cout<<"|| 13  ||  14 ||  15 ||  16 ||  17 ||  18 ||\n||  19 ||  20 ||  21 ||  22 ||  23 ||  24 ||\n||  25 ||  26 ||  27 ||  28 ||  29 ||  30 ||\n||  31 ||  32 ||  33 ||  34 ||  35 ||  36 ||"<<endl;
	cout<<"Enter the first number: ";
	cin>>number1;
	cout<<"Enter the second number: ";
	cin>>number2;
		switch(number1)
		{
			case 1 :
			case 6 :
			case 7 :
			case 12 :
			case 17 :
			case 20 :
			case 28 :
			case 33 :
				colour1='g';
			break;
			case 2 :
			case 11 :
			case 13 :
			case 18 :
			case 19 :
			case 24 :
			case 29 :
			case 32 :
				colour1='r';
			break;
			case 3 :
			case 10 :
			case 14 :
			case 23 :
			case 25 :
			case 30 :
			case 31 :
			case 36 :
				colour1='b';
			break;
			case 4 :
			case 9 :
			case 15 :
			case 22 :
			case 26 :
			case 35 :
				colour1 = 'o';
			break;
			case 5 :
			case 8 :
			case 16 :
			case 21 :
			case 27 :	
			case 34 :
				colour1='w';	//w is for the grey colour
			break;
			default :
				cout<<"Invalid entry"<<endl;
		}
		switch(number2)
		{
			case 1 :
			case 6 :
			case 7 :
			case 12 :
			case 17 :
			case 20 :
			case 28 :
			case 33 :
				colour2='g';
			break;
			case 2 :
			case 11 :
			case 13 :
			case 18 :
			case 19 :
			case 24 :
			case 29 :
			case 32 :
				colour2='r';
			break;
			case 3 :
			case 10 :
			case 14 :
			case 23 :
			case 25 :
			case 30 :
			case 31 :
			case 36 :
				colour2='b';
			break;
			case 4 :
			case 9 :
			case 15 :
			case 22 :
			case 26 :
			case 35 :
				colour2 = 'o';
			break;
			case 5 :
			case 8 :
			case 16 :
			case 21 :
			case 27 :	
			case 34 :
				colour2='w';	//w is for the grey colour
			break;
			default :
				cout<<"Invalid entry"<<endl;
		}
		if(colour1=='g' && colour2=='g')
		{
			cout<<number1<<" and "<<number2<<" are in the same colour Green"<<endl;
		}
		else if(colour1=='r' && colour2=='r')
		{
			cout<<number1<<" and "<<number2<<" are in the same colour Red"<<endl;
		}
		else if(colour1=='b' && colour2=='b')
		{
			cout<<number1<<" and "<<number2<<" are in the same colour Blue"<<endl;
		}
		else if(colour1=='o' && colour2=='o')
		{
			cout<<number1<<" and "<<number2<<" are in the same colour Orange"<<endl;
		}
		else if(colour1=='w' && colour2=='w')
		{
			cout<<number1<<" and "<<number2<<" are in the same colour Grey"<<endl;
		}
		else
		{
			cout<<"Numbers aren't in the same colour\nGoodbye!"<<endl;
		}
return 0;
}
