<<<<<<< HEAD
/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 3)
   different series summations' program in which the user chooses the number of terms
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float   fractDen, sum=0; 	//fractDen is the fraction  denominator, n is the number of terms
	int nTerms ,number;	//n is the number of terms
	char yesOrNo;
	do
	{
		cout<<"Enter the Summmation you want to  run:";
		cin>>number;
		if(number>0)
		{
			cout<<"Enter the number of terms : ";
			cin>>nTerms;
			switch(number)
			{
				case 1:
					fractDen=2;
					for(int i=1; i<=nTerms ; i++)	//number of terms are n
					{
						sum+=1/fractDen;		//at first the fractional denominator is two 
						fractDen*=2;	//the denominator of a term is multiplied by two for every new term
					}
					cout<<"Sum is "<<sum<<"\nGoodbye"<<endl;
				break;
				case 2:
					for(int j=1; j<=nTerms; j++)		
					{
						sum+= j/(j+1);	//the first fractional denominator is 2.. so, j is 1 the first time and 2 the second time
					}
					cout<<"Sum is "<<sum<<"\nGoodbye "<<endl;
				break;
				case 3:
					for(int k=1; k<=nTerms; k++ )
					{
						sum+=1/k;	//one is the fractional denominator(k in this case), one is added in every next term
					}
					cout<<"Sum is "<<sum<<"\nGoodbye"<<endl;
				break;
				default :
					cout<<"Invalid number entered "<<endl;
			}
		}	
		else
		{
			cout<<"invalid entry"<<endl;
		}
		cout<<"Do you want to continue? (y for yes):";	//checkind if the user wants to run again
		cin>>yesOrNo;
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
return 0;
}
	
=======
/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 3)
   different series summations' program in which the user chooses the number of terms
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float   fractDen, sum=0; 	//fractDen is the fraction  denominator, n is the number of terms
	int nTerms ,number;	//n is the number of terms
	char yesOrNo;
	do
	{
		cout<<"Enter the Summmation you want to  run:";
		cin>>number;
		if(number>0)
		{
			cout<<"Enter the number of terms : ";
			cin>>nTerms;
			switch(number)
			{
				case 1:
					fractDen=2;
					for(int i=1; i<=nTerms ; i++)	//number of terms are n
					{
						sum+=1/fractDen;		//at first the fractional denominator is two 
						fractDen*=2;	//the denominator of a term is multiplied by two for every new term
					}
					cout<<"Sum is "<<sum<<"\nGoodbye"<<endl;
				break;
				case 2:
					for(int j=1; j<=nTerms; j++)		
					{
						sum+= j/(j+1);	//the first fractional denominator is 2.. so, j is 1 the first time and 2 the second time
					}
					cout<<"Sum is "<<sum<<"\nGoodbye "<<endl;
				break;
				case 3:
					for(int k=1; k<=nTerms; k++ )
					{
						sum+=1/k;	//one is the fractional denominator(k in this case), one is added in every next term
					}
					cout<<"Sum is "<<sum<<"\nGoodbye"<<endl;
				break;
				default :
					cout<<"Invalid number entered "<<endl;
			}
		}	
		else
		{
			cout<<"invalid entry"<<endl;
		}
		cout<<"Do you want to continue? (y for yes):";	//checkind if the user wants to run again
		cin>>yesOrNo;
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
return 0;
}
	
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
