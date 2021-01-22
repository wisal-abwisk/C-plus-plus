#include<iostream>
using namespace std;

int main()
{
	int elements;
	cout << "Enter the Number of Elements you want to enter: ";
	cin >>elements;
	int* Array = new int[elements]; 
	int* sub_arr_1 = new int[elements/2]; 
	int* sub_arr_2 = new int[elements/2];
	
	for(int i = 0 ; i < elements; i++)
	{
		cout <<" Enter the Array Element "<<i+1<<" :";
		cin >>Array[i];
	}
	for(int i = 0; i < elements/2; i++)
	{
		sub_arr_1[i] = Array[i];
	}
	for(int i = 0; i < elements/2; i++)
	{
		sub_arr_2[i] = Array[i+ elements/2];
	}
	cout << " Main Array : [";
	for(int i = 0; i < elements; i++)
	{
		cout << Array[i]<<" ";
	}
	cout<<"]";
	cout << "\n Sub Array 1 : [";
	for(int i = 0; i < elements/2; i++)
	{
		cout << sub_arr_1[i]<<" ";
	}
	cout <<"]";
	cout << "\n Sub Array 2 : [";
	for(int i = 0; i < elements/2; i++)
	{
		cout << sub_arr_2[i]<<" ";
	}
	cout <<"]";
	
	delete[] Array;
	delete[] sub_arr_1;
	delete[] sub_arr_2;
return 0;	
}
