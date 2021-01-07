#include<iostream>
using namespace std;
int main()
{
	int numberOfRows;
	cout<<"enter the number of rows :";
	cin>>numberOfRows;
	for(int rowNum=1 ; rowNum<=numberOfRows ; rowNum++)
	{
		for(int spaces=numberOfRows; spaces>rowNum ; spaces--)		//loop for the middle 1		{
		{
			cout<<" ";
		}
		for(int k= rowNum; k>=1; k--)	//digits for the first half
		{
			cout<<k;
		}
		for(int l=2 ; l<=rowNum ; l++)	// digits for the second half that starts from 2
		{
			cout<<l;
		}
	cout<<endl;
	}
return 0;
}
