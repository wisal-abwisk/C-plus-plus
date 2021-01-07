#include<iostream>
using namespace std;
int main()
{
	int numbers, pSum=0, nSum=0, eSum=0, oSum=0;
	bool flag=true;		//p,n,e,o stands for postive,negative,even and odd
	do
	{
		cout<<"Enter an integer (positve or negative)(0 to exit):";
		cin>>numbers;
		
		if(numbers!=0)	
		{
			if(numbers>0 && numbers!=0)
			{
			pSum = pSum + numbers;
			}
			if(numbers<0 && numbers!=0)
			{
			nSum = nSum + numbers;
			}
			if(numbers%2==0)
			{
			eSum = eSum + numbers;
			}
			if(numbers%2==1)
			{
			oSum = oSum + numbers;
			} 
		}
		else
		{
		flag=false;
		}
	}
	while(numbers!=0);
	if(flag==false)
	{
		cout<<"invalid entry"<<endl;
	}
	else
	{
	cout<<"\nSum of Positive integers : "<<pSum<<endl;
	cout<<"Sum of Negative integers : "<<nSum<<endl;
	cout<<"Sum of even integers : "<<eSum<<endl;
	cout<<"Sum of odd integers : "<<oSum<<endl;
	}
return 0;
}
	 
