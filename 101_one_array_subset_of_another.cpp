#include<iostream>
using namespace std;

int main()
{
	bool subset = false;
	int elements_1, elements_2;
	
	cout <<"Enter the Number of elements you want to enter (main set) : ";
	cin >> elements_1;
	cout << "Enter the number of elements in you want in (subset) : ";
	cin >> elements_2;
	int* array_1 = new int[elements_1];
	int* array_2 = new int[elements_2];
	if(elements_2 > elements_1)
	{
		cout << "Subset's elements cant be more than main set elements";	
	}
	else
	{
		for(int i = 0; i < elements_1; i++)
		{
		cout <<"Enter element array main " << i+1 << " : ";
		cin >> array_1[i];
		}
		for(int i = 0; i < elements_2; i++)
		{
		cout <<"Enter element array subset " << i+1 << " : ";
		cin >> array_2[i];
		}
		for(int i = 0; i < elements_2; i++)
		{
			for(int j = 0; j < elements_1; j++)
			{
				if(array_2[i] == array_1[j])
				{
					subset = true;
				}
			}
		}
	}
	if(subset)
		cout << subset << " TRUE";
	else
		cout << subset << " FALSE";
		
	delete[] array_1;
	delete[] array_2;
return 0;
}
