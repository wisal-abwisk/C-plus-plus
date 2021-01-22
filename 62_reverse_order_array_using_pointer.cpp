#include<iostream>
using namespace std;
int main()
{
	int arr_input[5];
	int *ptr = arr_input;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter number "<<i+1<<" : ";
		cin>>arr_input[i];
		*(ptr+i) = arr_input[i];
	}
	cout<<" The array in reverse order is array[";
	for( int i=4; i>=0; i--)
	{
		cout<< *(ptr+i)<<" ";
	}
	cout<<" ]"<<endl;
return 0;
}
