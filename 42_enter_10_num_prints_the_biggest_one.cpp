#include<iostream>
using namespace std;
int main()
{
 	int array_num[10];
 	for(int i=0 ;i<10 ;i++)
 	{
		cout<<"Enter the number"<<i+1<<":";
 		cin>>array_num[i];
 	}
 	int max=array_num[0];
 	for(int j=0 ; j<10 ;j++ )
 	{
 		if(max<array_num[j])
		{
			max=array_num[j];	
		}	
	}
	cout<<"The Biggest number is "<<max<<endl;
return 0;
}
