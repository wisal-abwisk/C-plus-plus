<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
	int rows, col;
	cout<<"***2D-array***"<<endl;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	cout<<"Enter the number of columns: ";
	cin>>col;
	cout<<"\n\n";
	int matrix[rows][col];
	for(int i=0; i<rows; i++)
	{
		for(int j=0 ; j<col; j++)
		{
			cout<<"Enter matrix["<<i<<"]["<<j<<"] :";
			cin>>matrix[i][j];
		}
	cout<<endl;
	}
	cout<<"\n The matrix is "<<endl;
	for (int i=0; i<rows ; i++)
	{
		cout<<"| ";
		for(int j=0; j<col; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<" |";
	cout<<endl;
	}
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
	int rows, col;
	cout<<"***2D-array***"<<endl;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	cout<<"Enter the number of columns: ";
	cin>>col;
	cout<<"\n\n";
	int matrix[rows][col];
	for(int i=0; i<rows; i++)
	{
		for(int j=0 ; j<col; j++)
		{
			cout<<"Enter matrix["<<i<<"]["<<j<<"] :";
			cin>>matrix[i][j];
		}
	cout<<endl;
	}
	cout<<"\n The matrix is "<<endl;
	for (int i=0; i<rows ; i++)
	{
		cout<<"| ";
		for(int j=0; j<col; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<" |";
	cout<<endl;
	}
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
