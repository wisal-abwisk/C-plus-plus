<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int rows, cols;
	float e_norm;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;
	int **array = new int *[rows];
	int *e_sum = new int(0);
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
	
	cout << "The euclidean form of array is: " << e_norm;
	
	delete e_sum;
	delete[] array;
	return 0;
}

=======
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int rows, cols;
	float e_norm;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;
	int **array = new int *[rows];
	int *e_sum = new int(0);
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
	
	cout << "The euclidean form of array is: " << e_norm;
	
	delete e_sum;
	delete[] array;
	return 0;
}

>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
