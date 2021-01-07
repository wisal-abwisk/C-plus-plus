<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
	int row, col;
	cout<<" Enter the size of array that you want\nRows:";
	cin>>row;
	cout<<" Columns :";
	cin>>col;
	
	//declaring arrays
	int arr_1[row][col],arr_2[row][col], add_arr[row][col];
	
	//enter first array
	for( int i=0; i<row; i++)
	{
		for(int j=0 ; j<col; j++)
		{
			cout<<" Enter arr_1["<<i<<"]["<<j<<"] :";
			cin>>arr_1[i][j];
		}
	
	}
	
	//enter second array
	for (int i=0; i<row; i++)
	{
		for(int k=0; k<col; k++)
		{
			cout<<" Enter arr_2["<<i<<"]["<<k<<"] :";
			cin>>arr_2[i][k];
		}
	}
	//adding the arrays
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			add_arr[i][j]= arr_1[i][j] + arr_2[i][j];
		}
	cout<<endl;
	}
	
	//printing the added array
	cout<<"The added array is";
	for(int i=0; i<row; i++)
	{
		for(int j=0 ; j<col; j++)
		{
			cout<<"\nadd_arr["<<i<<"]["<<j<<"]"<<add_arr[i][j]<<endl;
		}
	}
	
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
	int row, col;
	cout<<" Enter the size of array that you want\nRows:";
	cin>>row;
	cout<<" Columns :";
	cin>>col;
	
	//declaring arrays
	int arr_1[row][col],arr_2[row][col], add_arr[row][col];
	
	//enter first array
	for( int i=0; i<row; i++)
	{
		for(int j=0 ; j<col; j++)
		{
			cout<<" Enter arr_1["<<i<<"]["<<j<<"] :";
			cin>>arr_1[i][j];
		}
	
	}
	
	//enter second array
	for (int i=0; i<row; i++)
	{
		for(int k=0; k<col; k++)
		{
			cout<<" Enter arr_2["<<i<<"]["<<k<<"] :";
			cin>>arr_2[i][k];
		}
	}
	//adding the arrays
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			add_arr[i][j]= arr_1[i][j] + arr_2[i][j];
		}
	cout<<endl;
	}
	
	//printing the added array
	cout<<"The added array is";
	for(int i=0; i<row; i++)
	{
		for(int j=0 ; j<col; j++)
		{
			cout<<"\nadd_arr["<<i<<"]["<<j<<"]"<<add_arr[i][j]<<endl;
		}
	}
	
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
