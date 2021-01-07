//type casting

#include<iostream>
using namespace std;
int main()
{
	float average,num1,num2,num3;
	int calc;
	cin>>num1>>num2>>num3;
	average=static_cast<int>(num1+num2+num3)/3;	//this will give you integer value
	//num1=(float) (num2/average);
	//cout<<"num1:"<<num1<<"\n";
	//or
	//average=(int) (num1+num2+num3)/3;		this will give you integer value
	//or
	//average=static_cast<double>(num1+num2+num3)/3; //this will give float value
	cout<<"average:"<<average;
return 0;
}
