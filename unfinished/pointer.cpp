#include<iostream>
using namespace std;
int main()
{
	int y=6;
	int *yptr;
	yptr= &y;	//yptr ges the address of y
	cout<<"yptr :"<<yptr<<endl;		//gives address of y
	cout<<"*yptr :"<<*yptr<<endl;	//gives value of y
	cout<<"y :"<<y<<endl;			//gives value of y
	cout<<"&y :"<<&y<<endl;			//gives address of y
	cout<<"&yptr :"<<&yptr<<endl;	//gives address of pointer
	cout<<"*&yptr :"<<*&yptr<<endl;	//* and & cancels each other and gives address of  y
	cout<<"&*yptr :"<<&*yptr<<endl;	//same as above line
	//cout<<"&*y :"<<&*y<<endl;		//error
	
return 0;
}
