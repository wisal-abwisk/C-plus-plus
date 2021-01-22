//i200697 task01 lab10 pf

#include<iostream>
using namespace std;
int main()
{
	int temp,size=20, number_of_elements=0;
	int B[size]={10, 18, 15, 65, 12, 93, 77, 81, 13, 66, 61, 27, 11, 46, 33, 25, 62, 38, 8, 9};
	cout<<"The Array of B is B[";
	
	for(int index=0; index<size; index++)
	{
		cout<<B[index]<<", ";	
		number_of_elements++;	//this counter counts the number of elements
	}
	cout<<"]"<<endl;
	cout<<"numbers of elements are "<<sizeof(B)/4<<endl;	//printing it with sizeof function
	cout<<"\nThe number of elements in B are "<<number_of_elements<<endl;
return 0;
}

