#include<iostream>
using namespace std;
int main()
{
	int max, min, arr_input[5];
	int *ptr;
	ptr = &arr_input[0];
	for(int i=0; i<5; i++)
	{
		cout<<" Enter number "<<i+1<<" : ";
		cin>>arr_input[i];
		*(ptr+i) = arr_input[i];
	}
	max = *ptr;
	min = *ptr;
	for(int i=0; i<5; i++)
	{
		if(*(ptr+i)> max)
		{
			max = *(ptr+i);
		}
		if (*(ptr + i) < min)
		{
			min = *(ptr + i);
		}
	}
	cout<<" The max number is : "<<max<<"\n The minimun number is : "<<min;
return 0;
}
