#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int binary,binaryInDeci=0, binaryDigits, bitW=0, bit;	// bitw is bit weight, binaryindecci is the number converted into binary, binary is the input number
	char yesOrNo;	//used for taking choice from user whether he wants to try again?
	bool flag=true;	//flag to check whether the enterd number is fully in binary or not
	do
	{
		cout<<"Enter a binary number :";
		cin>>binary;
		while(binary != 0)
		{
			if(binary%10==1 || binary%10==0)	//only take binary entries
			{
				bit=binary%10;
				binaryInDeci+= (bit * pow(2,bitW));
				binary=binary/10;
				bitW++;
			}
			else		//if anything other than binary is entered then flag will be false and invalid entry will be shown
			{
				flag=false;
			}
			
		}
		if(flag==true)		// the output will only be displayed if the flag is true
			{
				cout<<"Binary number in decimals is "<<binaryInDeci<<endl;
			}
			else
			{
				cout<<"invalid entry"<<endl;
			}
			cout<<"Do you want to try again?(y for yes)";
			cin>>yesOrNo;
		
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
return 0;
}
		
		
		
			
