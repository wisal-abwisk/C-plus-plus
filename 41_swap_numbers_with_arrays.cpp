<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
	int numbers,temp,i=0,j,k;
	char yesOrNo;
	cout<<"Enter The amount of numbers you are going to enter: ";
	cin>>numbers;
	int array_num[numbers];	//array that will store the amount of numbers the user gives
	for(i=0 ; i<numbers ; i++)
	{
		cout<<"Enter the number "<<i+1<<" : ";
		cin>>array_num[i];
	}
	
	for(k=0; k<i; k++)
	{
		for( j=0;j<i;j++)	
		{
			if(array_num[j]<array_num[j+1])
			{
				temp=array_num[j];
				array_num[j]=array_num[j+1];
				array_num[j+1]=temp;
			}
		}
	}
	cout<<"The sorted array is ";
	for(int j=0; j<i ; j++)
	cout<<array_num[j]<<endl;
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
	int numbers,temp,i=0,j,k;
	char yesOrNo;
	cout<<"Enter The amount of numbers you are going to enter: ";
	cin>>numbers;
	int array_num[numbers];	//array that will store the amount of numbers the user gives
	for(i=0 ; i<numbers ; i++)
	{
		cout<<"Enter the number "<<i+1<<" : ";
		cin>>array_num[i];
	}
	
	for(k=0; k<i; k++)
	{
		for( j=0;j<i;j++)	
		{
			if(array_num[j]<array_num[j+1])
			{
				temp=array_num[j];
				array_num[j]=array_num[j+1];
				array_num[j+1]=temp;
			}
		}
	}
	cout<<"The sorted array is ";
	for(int j=0; j<i ; j++)
	cout<<array_num[j]<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
