#include<iostream>
using namespace std;

void print_index(int* , int , int*);

int main()
{
	int length=0, index;
	int *ptr_index;
	ptr_index = &index;
	int* array = new int[100];
	for(length = 0; length < 100; length++)
	{
		cout <<"Enter the number "<<length+1<<" (0 to exit) : ";
		cin >>array[length];
		if(array[length] == 0)
			break;
	}
	print_index(array,length,ptr_index);
	cout <<"\n The array you entered is : [ ";
	for(int i=0; i<length; i++)
	{
		cout<<array[i];
		if(i < length-1)
		{
			cout <<", ";
		}
	}
	cout <<"]\n";
	delete[] array;
return 0;
}

void print_index(int* arr, int length, int* ptr_index)
{
	int target;
	int*ptr_target;
	ptr_target = &target;
	cout <<"\nEnter the target : ";
	cin >> target;
	for(int i=0; i < length; i++)
	{
		if(arr[i] == *ptr_target)
		{
			*ptr_index = i;
			break;
		}
	}
	cout <<"\n The Target is on Index "<<*ptr_index<<".";
}
