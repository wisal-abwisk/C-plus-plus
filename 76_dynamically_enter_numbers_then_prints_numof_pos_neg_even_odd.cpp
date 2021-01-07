<<<<<<< HEAD
/*Take 20 integer inputs from user (all dynamically) and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers*/
#include<iostream>
using namespace std;
int main()
{
	int positive=0, negative=0, even=0, odd=0;
	const int size=20;
	int *ptr= new int [size];
	int array_input[size];
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter the "<<i+1<<"th number : ";
		cin>>array_input[i];
		ptr[i] = array_input[i];
		
		if(ptr[i]>0)
		{
			positive++;
			if(ptr[i]%2==0)
				even++;	
			else
				odd++;
		}
		else
		{
			negative++;
			if(ptr[i]%2==0)
				even++;
			else
				odd++;
		}
	}
	
	cout<<"The number of positive numbers :"<<positive<<endl;
	cout<<"The number of negative numbers :"<<negative<<endl;
	cout<<"The number of even numbers :"<<even<<endl;
	cout<<"The number of odd numbers :"<<odd<<endl;
	
	delete [] ptr;
return 0;	
}
=======
/*Take 20 integer inputs from user (all dynamically) and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers*/
#include<iostream>
using namespace std;
int main()
{
	int positive=0, negative=0, even=0, odd=0;
	const int size=20;
	int *ptr= new int [size];
	int array_input[size];
	
	for(int i=0; i<size; i++)
	{
		cout<<"Enter the "<<i+1<<"th number : ";
		cin>>array_input[i];
		ptr[i] = array_input[i];
		
		if(ptr[i]>0)
		{
			positive++;
			if(ptr[i]%2==0)
				even++;	
			else
				odd++;
		}
		else
		{
			negative++;
			if(ptr[i]%2==0)
				even++;
			else
				odd++;
		}
	}
	
	cout<<"The number of positive numbers :"<<positive<<endl;
	cout<<"The number of negative numbers :"<<negative<<endl;
	cout<<"The number of even numbers :"<<even<<endl;
	cout<<"The number of odd numbers :"<<odd<<endl;
	
	delete [] ptr;
return 0;	
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
