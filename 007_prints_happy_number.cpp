/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 8)
   this program will do calculations and print if a number is happy number or not
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,counter=1,result=0,digit,input_num;
	char yesOrNo;
	bool flag=false;
	do
	{
		cout<<"Enter your Number :";
		cin>>num;
		input_num=num;	//stored the user's input number so that even if the value of unput changed afterwards, we can still display the main input number 
		if(num>0)	//only positive input numbers will be used in this program
		{
			do
			{
				result=0;	//result is the sum of the squares of the digits of the input number(num)
				while(num>0)	//to get the result (digits squared)
				{
					digit=pow(num%10,2);	// digit is actually the digit value squared
					result+=digit;		// result will start from 0.. then 0=0+digit(which is already squared)
					num/=10;		//now the number is divided so the second digit can be fetched and calculated
				}
				num=result;	//here num is the new number generated from the first result which may or maynot be equal to one 
				counter++;
			}
			while(num>1 && counter<=10);	//the loop will run ten times where the value of num will change 10 times , but we need the result(new number generated from calculation) equal to 1.. so, we put the limit on number in the condition that run until num>1 
			if(result==1) //when the result is one then it's automatically a happy number 
			{
				cout<<"you got it! "<<input_num<<" is a happy number!"<<endl;
			}
			else	//if its result isn't equal to one,that means that loop ran 10 times but still the result wasn't 1
			{
				cout<<input_num<<" is not a happy number "<<endl;
			}
		}
		else
		{
			cout<<"invalid entry!"<<endl;
		}
		if(num!=char()) 	//this will make sure that the prompt of do you want to continue is only shown if the entry isn't a character
		{
			cout<<"do you want to try another number? (y for yes):";
			cin>>yesOrNo;
		}
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
return 0;
}

