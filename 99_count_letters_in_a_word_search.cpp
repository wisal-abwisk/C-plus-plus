#include<iostream>
using namespace std;

int main()
{
	int cols, rows, count = 0;
	char element_to_count;
	cout << "Enter the number of columns for the words: ";
	cin >> cols;
	cout << "Enter the number of rows for the words: ";
	cin >> rows;
	char array[rows][cols];
	for ( int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			cout << "Enter element row " << i + 1 << ", column " << j + 1 << ": ";
			cin >> array[i][j];
		}
	}
	
	cout << "Enter a letter you want to know the count of ";
	cin >> element_to_count;
	
	for ( int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			if (array[i][j] == element_to_count)
				count++;
		}
	}
	for ( int i = 0; i < rows; i++)
	{
		cout << "[ ";
		for(int j = 0; j < cols; j++)
		{
			cout << array[i][j];
			if( j < cols - 1)
			{
				cout <<", ";
			}
		}
		cout << "]\n";
	}
	
	cout << element_to_count <<" is reapeated "<<count<<" times.";
return 0;
}
