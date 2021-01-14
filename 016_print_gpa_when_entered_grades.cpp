<<<<<<< HEAD
//task 03
#include<iostream>
#include<string>
using namespace std;
string grade2number(string);
int main()
{
	string grade;
	char yesOrNo;
	do
	{
		cout<<"Enter your grade (no +/-):";
		cin>>grade;
		cout<<"The corresponding numeric grade is:"<<grade2number(grade);	
		cout<<"\nDo you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
	
return 0;
}
string grade2number(string grade)
{
	if(grade=="A" || grade=="a")
	grade="4.0";
	else if(grade=="B" || grade=="b")
	grade= "3.0";
	else if(grade=="C" || grade=="c")
	grade= "2.0";
	else if(grade=="D" || grade=="d")
	grade= "1.0";
	else if(grade=="F" || grade=="f")
	grade= "0.0";
	else
	{
	grade="-1.0";
	}
	return grade;
}


=======
//task 03
#include<iostream>
#include<string>
using namespace std;
string grade2number(string);
int main()
{
	string grade;
	char yesOrNo;
	do
	{
		cout<<"Enter your grade (no +/-):";
		cin>>grade;
		cout<<"The corresponding numeric grade is:"<<grade2number(grade);	
		cout<<"\nDo you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');
	
return 0;
}
string grade2number(string grade)
{
	if(grade=="A" || grade=="a")
	grade="4.0";
	else if(grade=="B" || grade=="b")
	grade= "3.0";
	else if(grade=="C" || grade=="c")
	grade= "2.0";
	else if(grade=="D" || grade=="d")
	grade= "1.0";
	else if(grade=="F" || grade=="f")
	grade= "0.0";
	else
	{
	grade="-1.0";
	}
	return grade;
}


>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
