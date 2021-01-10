/*
Create a function that takes in two arrays and returns true if the second array follows the first array by one element,
and false otherwise. In other words, determine if the second array is the first array shifted to the right by 1.
Examples
simonSays([1, 2], [5, 1]) ? true
simonSays([1, 2], [5, 5]) ? false
simonSays([1, 2, 3, 4, 5], [0, 1, 2, 3, 4]) ? true
simonSays([1, 2, 3, 4, 5], [5, 5, 1, 2, 3]) ? false
*/
#include <iostream>
using namespace std;

void simon_says(int *, int *, int );

int main()
{
	bool simon_check;
	int array_before[20], array_after[20], size;
	int *ptr_arr_before, *ptr_arr_after;
	ptr_arr_before = &array_before[0];
	ptr_arr_after = &array_after[0];
	cout << "How many elements do you want to enter (less than 20) :";
	cin >> size;
	for(int i = 0; i < size; i++)
	{
		cout<<" Array 1 : "<<"Element "<<i+1<<" :";
		cin >> array_before[i];
		*(ptr_arr_before + i) = array_before[i];
	}
	for(int j = 0; j < size; j++)
	{
		cout<<" Array 2 : "<<"Element "<<j+1<<" :";
		cin >> array_after[j];
		*(ptr_arr_after + j) = array_after[j];
	}
	
	simon_says( ptr_arr_before, ptr_arr_after, size);
	
return 0;
}

void simon_says(int *ptr_arr_before, int *ptr_arr_after, int size)
{	
	bool simon_check;
	int simon = 0;
	for(int i = 0; i < size; i++)
	{
		if(*(ptr_arr_before + i) == *(ptr_arr_after + (i+1)))
		{
			simon++;
			simon_check = true;
		}
		else
		{
			simon_check  = false;
		}
	}
	if(simon == size-1)
	{
		simon_check = true;
	}
	else
	{
		simon_check = false;
	}
	cout<<simon_check; //1 means true and 0 means false
}
