#include<iostream>
using namespace std;

int main()
{
	int elements;
	int* max_difference = new int();
	int* min_difference = new int();
	cout <<" Enter the Number of elements you want to Enter : ";
	cin >> elements;
	int* array = new int[elements];
	
	for(int i=0; i < elements; i++)
	{
		cout <<"\nEnter Array Element "<<i+1<<" :";
		cin >> array[i];
	}
	
	for(int i=0; i<elements; i++)
	{
		for(int j=0; j<elements; j++)
		{
			if(array[i] > array[i+1])
			{
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}
	*max_difference = array[elements] - array[0];
	*min_difference = array[1] - array[0];
	
	cout << "The maximum difference is : "<<*max_difference<<endl;
	cout << "The minimum difference is : "<<*min_difference;
	
	delete[] array;
	delete max_difference;
	delete min_difference;
return 0;
}
