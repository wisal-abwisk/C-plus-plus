#include<iostream>
using namespace std;

int number_of_paths(int *);

int main()
{
	int city_num, num_paths;
	int *ptr_city_num;
	ptr_city_num = &city_num;
	cout<<" \nEnter the number of cities : ";
	cin>> city_num;
	num_paths = number_of_paths(ptr_city_num);
	cout<<" \nNumber of Paths you can take to reach the destination are : "<<num_paths<<endl;
return 0;
}

int number_of_paths(int *ptr_city_num)
{
	int city_num = *ptr_city_num;
	int factorial = 1;
	for(int i = city_num  ; i > 0 ; i-- )
	{
		factorial *= city_num;
		city_num--;
	}
	return factorial;	
}
