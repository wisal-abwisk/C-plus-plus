#include <iostream>
using namespace std;

void count_integers( char array[]);

int main()
{
	char array[20];
	cout << "Enter the number: ";
	cin >> array;
	count_integers(array);
	return 0;	
}

void count_integers( char array[])
{
	int i, j, k, count, final[20], length;
	for (i = 0; array[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; array[j] != '\0'; j++)
		{
			if(array[j] == array[i])
			{
				count++;
			}
		}
		final[i] = count;
	}
	length = i - 1;
	for (k = 0; k <= length; k++)
		cout << final[k];
}
