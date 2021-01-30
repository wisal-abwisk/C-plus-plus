#include<iostream>
#include<string.h>

using namespace std;

int size=50;
void reverse(char A[]);
int main()
{

//	char* A = new char[size];
	char A[size];
	string str;
	cout <<"Enter the string: ";
	getline(cin, str);
	
	strcpy(A, str.c_str());
	reverse(A);	
return 0;
}
void reverse(char A[])
{
	int length=0, previous=0, first = 0, last;
	char temp;
	cout<<"\n\tThe original string is ";
	for(; A[length] != '\0'; length++)
	{
		cout << A[length];
	}
	char B[length];
	length--;
	
	for(int i =length, j=0; i>=0; i--,j++)
	{
		B[j] = A[i];
	}
    B[length + 1] = ' ';
	cout<<"\n\tThe reversed string is ";
	for(int i=1; i <= length + 1; i++)
	{
		if(B[i] == ' ')
		{
			last = i - 1;
			for(int j = first, k = last; j <= (first + last) / 2; j++,k--)
			{
				temp = B[j];
				B[j] = B[i];
				B[i] = temp;
			}
			first = i + 1;
		}
	}
	for(int i=0; B[i] != '\0'; i++)
	{
		cout << B[i];
	}
}
