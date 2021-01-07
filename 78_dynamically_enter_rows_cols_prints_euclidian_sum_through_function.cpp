<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;
float e_norm_function(int **array, int rows , int cols );
int main()
{
	int rows, cols;
	float e_norm;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;
	int **array = new int *[rows];
	for (int i = 0; i < rows; i++)
		array[i] = new int[cols];
	
	e_norm = e_norm_function(array , rows, cols);
	
	cout << "The euclidean form of array is: " << e_norm;
	
	delete[] array;
	return 0;
}

float e_norm_function(int **array, int rows , int cols )
{
		int *e_sum = new int(0);
	float e_norm;
	for (int i = 0; i < rows; i++)
		array[i] = new int[cols];
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter values of array["<<i+1<<"]["<<j+1<<"] :";
			cin >> array[i][j];
		}
		cout << endl;
	}
	//calculating sum of squares of elements
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			*e_sum += (array[i][j]) * (array[i][j]);
		}
	}
	//taking square root of the whole sum of squares
	e_norm = sqrt(*e_sum);
	
	return(e_norm);
}

=======
#include <iostream>
#include <cmath>
using namespace std;
float e_norm_function(int **array, int rows , int cols );
int main()
{
	int rows, cols;
	float e_norm;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;
	int **array = new int *[rows];
	for (int i = 0; i < rows; i++)
		array[i] = new int[cols];
	
	e_norm = e_norm_function(array , rows, cols);
	
	cout << "The euclidean form of array is: " << e_norm;
	
	delete[] array;
	return 0;
}

float e_norm_function(int **array, int rows , int cols )
{
		int *e_sum = new int(0);
	float e_norm;
	for (int i = 0; i < rows; i++)
		array[i] = new int[cols];
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter values of array["<<i+1<<"]["<<j+1<<"] :";
			cin >> array[i][j];
		}
		cout << endl;
	}
	//calculating sum of squares of elements
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			*e_sum += (array[i][j]) * (array[i][j]);
		}
	}
	//taking square root of the whole sum of squares
	e_norm = sqrt(*e_sum);
	
	return(e_norm);
}

>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
