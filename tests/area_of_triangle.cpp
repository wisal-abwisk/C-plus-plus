#include<iostream>
using namespace std;

float areaOfTriangle(int,int);
void print_triangle(int,int);
int main()
{
	float area;
	int base, height;
	cout<<"Enter the base of triangle : ";
	cin >> base;
	cout<<"Enter the height of triangle : ";
	cin >>height;
	area = areaOfTriangle(base,height);
	cout <<"Area is : "<<area<<endl;
	print_triangle(base,height);
return 0;
}

float areaOfTriangle(int base,int height)
{
	float area;
	area = (0.5) * base * height;
	return area;
}

void print_triangle(int base,int height)
{
	for(int i = 0; i <= height; i++)
	{
		for(int j=0; j<i; j++)
		cout<<"*";
		
		cout<<endl;
	}
}
