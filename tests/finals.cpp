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
	int length=0, previous=0, word_size=0;
	cout<<"\n\tThe original string is ";
	for(; A[length] != '\0'; length++)
	{
		cout << A[length];
	}
	char B[length];
	length--;
	
	for(int i=0; i<length; i++)
	{
		if(A[i] == ' ')	
		for(int j=length; j>=0; j--)
		{
			
			
		}
	}
	
	
//	for(int i =length, j=0; i>=0; i--,j++)
//	{
//		B[j] = A[i];
//	}
//	
//	cout<<"\n\tThe reversed string is ";
//	
////	for(int i=0; B[i] != '\0'; i++)
////	{
////		if(B[i] == ' ')
////		{
////			word_size = i-previous-1;
////			for(int j=previous,k=previous+word_size ; j<= previous+(word_size/2); j++,k--)
////			{
////				int temp = B[j];
////				B[j] = B[i];
////				B[i] = temp;
////			}
////			previous = i+1;
////		}
////	}
//	for(int i=0; B[i] != '\0'; i++)
//	{
//		cout << B[i];
//	}
}
