#include<iostream>
using namespace std;
int main()
{
	int i=0 , size , arr_input[50];
	char yesOrNo;
	cout<<"**welcome to array element counter**\n";
	do
	{
		cout << "Enter the  Element of the array (max. 50)arr["<<i<<"] :";
		cin >> arr_input[i];
		cout<<"\npress 'y' if you want to enter another element :";
		cin >> yesOrNo;
		i++;
	}
	while(yesOrNo == 'y' || yesOrNo == 'Y' );
	size = sizeof(arr_input)/4;
	cout<<"\nThe total Elements of the array are "<<size<<endl;
	cout<<"\nThe Array you entered is Array {";
	for(int i= 0 ; i<size; i++)
	{
		cout<<arr_input[i]<<" ";
	}
	cout<<"}"<<endl;
return 0;
}
