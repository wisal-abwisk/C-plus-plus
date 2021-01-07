#include<iostream>
using namespace std;

float mean_return(int size);

int main()
{
	float mean;
	int size;
	cout<<"Enter the Number of integers you want to Enter :";
	cin>>size;
	mean = mean_return(size);
	cout<<"The mean is : "<<mean;
return 0;
}

float mean_return(int size)
{
	int sum=0;
	float mean;
	int arr_num[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter "<<i+1<<" th Number : ";
		cin>>arr_num[i];
	}
	for(int i=0; i<size; i++)
	{
		sum += arr_num[i];
	}
	mean = sum/size;
	return mean;
}
