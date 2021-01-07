<<<<<<< HEAD
#include <iostream>
using namespace std;

bool alternatePosNeg(int array[], int elements);

int main()
{
	int elements;
	cout << "Enter the number of elements: ";
	cin >> elements;
	int array[elements];
	
	for (int i = 0; i <= elements - 1; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> array[i];
	}
	
	if (alternatePosNeg(array, elements) == true)
		cout << "true";
	else 
		cout << "false";
	
	return 0;	 
}

bool alternatePosNeg(int array[], int elements)
{
	bool condition = true;
	
	for (int i = 0; i <= elements - 2; i++)
	{
		if (!((array[i] > 0 && array[i + 1] < 0) || (array[i] < 0 && array[i + 1] > 0)))
		{
			condition = false;
			break;
		}
	}
	
	return condition;
}
=======
#include <iostream>
using namespace std;

bool alternatePosNeg(int array[], int elements);

int main()
{
	int elements;
	cout << "Enter the number of elements: ";
	cin >> elements;
	int array[elements];
	
	for (int i = 0; i <= elements - 1; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> array[i];
	}
	
	if (alternatePosNeg(array, elements) == true)
		cout << "true";
	else 
		cout << "false";
	
	return 0;	 
}

bool alternatePosNeg(int array[], int elements)
{
	bool condition = true;
	
	for (int i = 0; i <= elements - 2; i++)
	{
		if (!((array[i] > 0 && array[i + 1] < 0) || (array[i] < 0 && array[i + 1] > 0)))
		{
			condition = false;
			break;
		}
	}
	
	return condition;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
