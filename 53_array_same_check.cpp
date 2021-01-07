<<<<<<< HEAD
//i200697 task05 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	int size=6, same_num_cntr=0;
	int X1[size]= {9, 6, 3, 3, 6, 42},X2[size]= {7, 4, 67, 89, 36, 9};
	
	//for displaying X1
	cout<<"The array X1 is X1 [";
	for(int index=0; index<size; index++)
	{
		cout<<X1[index]<<" ";
	}
	cout<<"]"<<endl;
	
	//for displaying X2
	cout<<"The array X2 is X2 [";
	for(int index=0; index<size; index++)
	{
		cout<<X2[index]<<" ";
	}
	cout<<"]"<<endl;
	
	//for checking if the arrays are the same or not
	for(int index=0 ; index<size ; index++)
	{
		if(X1[index]==X2[index])
		{
			same_num_cntr++;
		}
	}
	if(same_num_cntr==size)
	{
		cout<<"The Two arrays are the same!"<<endl;
	}
	else if(same_num_cntr>0 && same_num_cntr<size)
	{
		cout<<"The arrays are not the same\nBoth have "<<same_num_cntr<<" corresponding elements the same"<<endl;
	}
	else
	{
		cout<<"The arrays are not the same!"<<endl;
	}
return 0;
}
=======
//i200697 task05 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	int size=6, same_num_cntr=0;
	int X1[size]= {9, 6, 3, 3, 6, 42},X2[size]= {7, 4, 67, 89, 36, 9};
	
	//for displaying X1
	cout<<"The array X1 is X1 [";
	for(int index=0; index<size; index++)
	{
		cout<<X1[index]<<" ";
	}
	cout<<"]"<<endl;
	
	//for displaying X2
	cout<<"The array X2 is X2 [";
	for(int index=0; index<size; index++)
	{
		cout<<X2[index]<<" ";
	}
	cout<<"]"<<endl;
	
	//for checking if the arrays are the same or not
	for(int index=0 ; index<size ; index++)
	{
		if(X1[index]==X2[index])
		{
			same_num_cntr++;
		}
	}
	if(same_num_cntr==size)
	{
		cout<<"The Two arrays are the same!"<<endl;
	}
	else if(same_num_cntr>0 && same_num_cntr<size)
	{
		cout<<"The arrays are not the same\nBoth have "<<same_num_cntr<<" corresponding elements the same"<<endl;
	}
	else
	{
		cout<<"The arrays are not the same!"<<endl;
	}
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
