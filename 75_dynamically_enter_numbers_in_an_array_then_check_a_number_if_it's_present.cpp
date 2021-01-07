<<<<<<< HEAD
/*Declare an array of 10 elements dynamically and initialize each element (from user). Make another
variable dynamically and take input from the user . Now, tell user whether that number is present in
array or not.*/

#include<iostream>
using namespace std;
int main()
{
	bool notpresent=false;
	const int size=10;
	int *ptr_num= new int();
	int*ptr= new int [size];
	int array_input[size] , number;
	for(int i=0 ; i<size; i++)
	{
		cout<<"Enter "<<i+1<<"th number :";
		cin>>array_input[i];
		ptr[i] = array_input[i];
	}
	
	cout<<"Now enter a number to see if it's inside the array :";
	cin>>number;
	
	ptr_num = &number;
	
	for(int j=0; j<size; j++)
	{
		if(*ptr_num == ptr[j])
		{
			cout<<"The Number is present inside the array ";
			break;
		}
		else
		{
			notpresent=true; 
		}
	}
	
	if(notpresent)
		cout<<"\nThe Number is not present in the array";
	else
		cout<<"\nGoodbye";
		
	delete[] ptr;
	delete ptr_num;
return 0;	
}
=======
/*Declare an array of 10 elements dynamically and initialize each element (from user). Make another
variable dynamically and take input from the user . Now, tell user whether that number is present in
array or not.*/

#include<iostream>
using namespace std;
int main()
{
	bool notpresent=false;
	const int size=10;
	int *ptr_num= new int();
	int*ptr= new int [size];
	int array_input[size] , number;
	for(int i=0 ; i<size; i++)
	{
		cout<<"Enter "<<i+1<<"th number :";
		cin>>array_input[i];
		ptr[i] = array_input[i];
	}
	
	cout<<"Now enter a number to see if it's inside the array :";
	cin>>number;
	
	ptr_num = &number;
	
	for(int j=0; j<size; j++)
	{
		if(*ptr_num == ptr[j])
		{
			cout<<"The Number is present inside the array ";
			break;
		}
		else
		{
			notpresent=true; 
		}
	}
	
	if(notpresent)
		cout<<"\nThe Number is not present in the array";
	else
		cout<<"\nGoodbye";
		
	delete[] ptr;
	delete ptr_num;
return 0;	
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
