#include <iostream>
using namespace std;

int main()
{
	const int size=10;
	int *ptr_arr = new int [size];
	int arr[size];
	int *ptr= new int (0);
	for(int i=0; i<size; i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr[i];
		ptr_arr[i]= arr[i];
	}
	for(int j=1; j<size; j++)
	{
		if(*ptr<ptr_arr[j])
		{
			*ptr= ptr_arr[j];
		}
	}
	cout<<"The Highest Number is="<<*ptr;
	
	delete [] ptr_arr;
	delete ptr;
return 0;
}
