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
	cout<<"||  1  ||  2  ||  3  ||  4  ||  5  ||  6  ||\n||  7  ||  8  ||  9  ||  10 ||  11 ||  12 ||\n";
	cout<<"|| 13  ||  14 ||  15 ||  16 ||  17 ||  18 ||\n||  19 ||  20 ||  21 ||  22 ||  23 ||  24 ||\n||  25 ||  26 ||  27 ||  28 ||  29 ||  30 ||\n||  31 ||  32 ||  33 ||  34 ||  35 ||  36 ||"<<endl;
	cout<<"Enter the first number: ";
	cin>>number1;
	cout<<"Enter the second number: ";
	cin>>number2;
	if( number1==number2)
	{
		cout<<"You entered the same numbers\n they are in the same colour"<<endl;
	}
	else
	{
		if((number1 > 0 && number1<=36) && (number2 > 0 && number2 <=36))
		{
			if ( (number1==2 || number1==11 || number1==13 || number1==18 || number1==19 || number1==24 || number1==29 || number1==32) && (number2==2 || number2==11 || number2==13 || number2==18 || number2==19 || number2==24 || number2==29 || number2==32) )
			{
			cout<<"Both the colours are in the Red boxes (same colour!)"<<endl;
			}
			else if ( (number1==4 || number1==9 || number1==15 || number1==22 || number1==26 || number1==35) && (number2==4 || number2==9 || number2==15 || number2==22 || number2==26 || number2==35) )
			{
			cout<<"Both the colours are in the Orange boxes (same colour!)"<<endl;
			}
			else if ( (number1==3 || number1==10 || number1==14 || number1==23 || number1==25 || number1==30 || number1==31 || number1==36) && (number2==2 || number2==11 || number2==13 || number2==18 || number2==19 || number2==24 || number2==29 || number2==32) )
			{
			cout<<"Both the colours are in the Blue boxes (same colour!)"<<endl;
			}
			else if ( (number1==5 || number1==8 || number1==16 || number1==21 || number1==27 || number1==34) && (number2==5 || number2==8 || number2==16 || number2==21 || number2==27 || number2==34) )
			{
			cout<<"Both the colours are in the Grey boxes (same colour!)"<<endl;
			}
			else if ( (number1==1 || number1==6 || number1==7 || number1==12 || number1==17 || number1==20 || number1==28 || number1==33) && (number2==1 || number2==6 || number2==7 || number2==12 || number2==17 || number2==20 || number2==28 || number2==33) )
			{
			cout<<"Both the colours are in the Green boxes (same colour!)"<<endl;
			}
			else
			{
			cout<<number1<<" and "<<number2<<" are not in the same coloured box "<<endl;
			cout<<"goodbye!"<<endl;
			}
		}
		else
		{
		cout<<"Invalid Entry!\n you can only enter numbers ranging from 1 to 36 \nGoodbye!"<<endl;
		}
	}
return 0;
}
