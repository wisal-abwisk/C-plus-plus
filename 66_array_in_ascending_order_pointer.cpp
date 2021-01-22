#include<iostream>
using namespace std;
int main()
{
	int arr_input[5], temp;
	int  *ptr;
	ptr = &arr_input[0];
	for(int i=0; i<5; i++)
	{
		cout<<" Enter number "<<i+1<<" : ";
		cin>>arr_input[i];
	}
	for( int i=0; i<5; i++)
	{
		for(int j=0 ; j<5 ; j++)	//innner loop 
		{
			if(*(ptr+j)> *(ptr+(j+1)))	//swapping the values if the condition is true
			{
				temp=*(ptr+j);	
				*(ptr+j)=*(ptr+(j+1));
				*(ptr+(j+1))=temp;
			}
		}
	}
	cout<<"the sorted array in ascending order is array["; 
	for(int i=0; i<5; i++)
	{
		cout<<arr_input[i]<<" ";
	}
	cout<<" ]"<<endl;
return 0;
}
