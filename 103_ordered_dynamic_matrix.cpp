#include<iostream>
using namespace std;

void print_numbers(int** , int, int);

int main()
{
	int rows, cols;
	cout << " Enter the number of Rows : ";
	cin >> rows;
	cout << " Enter the number of columns : ";
	cin >> cols;
	int** array = new int*[rows];
	for(int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}
	print_numbers(array, rows, cols);	
	for(int i = 0; i < rows; i++)
		delete[] array[i];
	delete[] array;
return 0;
}

void print_numbers(int** array, int rows, int cols )
{
	int number = 1;
	for(int i=0; i< rows; i++)
	{
		cout <<"| {";
		for(int j = 0; j < cols; j++)
		{
			array[i][j] = number;
			cout <<array[i][j]<<" ";
			number++;
		}
		cout << "} |\n";
	}
}
