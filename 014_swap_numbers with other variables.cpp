<<<<<<< HEAD
//task 01 (swaped floats)
#include<iostream>
using namespace std;
void swap_floats(float,float);
int main()
{
	float x,y;//two numbers that are going to be swaped
	char yesOrNo;
	do{
		cout<<"Enter the two numbers to swap:";
		cin>>x;
		cout<<"Enter the second number:";
		cin>>y;
		swap_floats (x, y);
		cout<<"\n Do you want to try again?(y for yes)";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
return 0;	
}
void swap_floats(float x, float y)
{
	float temporary;
	temporary=x;
	x=y;
	y=temporary;
	cout << x << " " << y << endl;
}

=======
//task 01 (swaped floats)
#include<iostream>
using namespace std;
void swap_floats(float,float);
int main()
{
	float x,y;//two numbers that are going to be swaped
	char yesOrNo;
	do{
		cout<<"Enter the two numbers to swap:";
		cin>>x;
		cout<<"Enter the second number:";
		cin>>y;
		swap_floats (x, y);
		cout<<"\n Do you want to try again?(y for yes)";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
return 0;	
}
void swap_floats(float x, float y)
{
	float temporary;
	temporary=x;
	x=y;
	y=temporary;
	cout << x << " " << y << endl;
}

>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
