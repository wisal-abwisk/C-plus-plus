#include<iostream>
using namespace std;
int main()
{
	float accountBalance,bankServiceFee, bankChequeFee;
	int noOfCheques;
	const int extraCharges=15,bankCharges=10;
	cout<<"Enter your Bank account Balance: ";
	cin>>accountBalance;
	cout<<"Enter your number of cheques: ";
	cin>>noOfCheques;
		if(accountBalance < 0)
		{
			cout<<"account balance can't be less than zero \n";
		}
		else
		{
			if(noOfCheques<0)
			{
				cout<<"number of cheques can't be less than zero\n";
			}
			else if(noOfCheques<20)
					bankChequeFee=0.10;
			else if(noOfCheques<40)
					bankChequeFee=0.08;
			else if(noOfCheques<60)
					bankChequeFee=0.06;
			else
			{
				bankChequeFee=0.04;
			}
				if(accountBalance<400)
				{
					bankServiceFee=bankCharges+extraCharges+bankChequeFee;
				}
				else
				{
					bankServiceFee=bankCharges+bankChequeFee;
			        }
			cout<<"Bank Service Fee is $"<<bankServiceFee<<endl;
	     }
return 0;
}
	      
