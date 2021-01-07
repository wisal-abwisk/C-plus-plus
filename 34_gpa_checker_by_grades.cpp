#include<iostream>
using namespace std;
int main()
{
	char grade, yesOrNo;
	int gpa0=0, gpa1=0, gpa2=0, gpa3=0, gpa4=0;
	do
	{
		cout<<"enter grade :";
		cin>>grade;
		switch(grade)
		{
			case 'A' :
			cout<<"your GPA is 4"<<endl;
			gpa4++;
			break;
			case 'a' :
			cout<<"your GPA is 4"<<endl;
			gpa4++;
			break;
			case 'B' :
			cout<<"your GPA is 3"<<endl;
			gpa3++;
			break;
			case 'b' :
			cout<<"your GPA is 3"<<endl;
			gpa3++;
			break;
			case 'C' :
			cout<<"your GPA is 2"<<endl;
			gpa2++;
			break;
			case 'c' :
			cout<<"your GPA is 2"<<endl;
			gpa2++;
			break;
			case 'D' :
			cout<<"your GPA is 1"<<endl;
			gpa1++;
			break;
			case 'd' :
			cout<<"your GPA is 1"<<endl;
			gpa1++;
			break;
			case 'F' :
			cout<<"your GPA is 0"<<endl;
			gpa0++;
			break;
			case 'f' :
			cout<<"your GPA is 0"<<endl;
			gpa0++;
			break;
			default:
			cout<<"you entered no grade. "<<endl;
		}
		cout<<" do you want to add more people's grade? (y for yes)";
		cin>>yesOrNo;
	}
	while (yesOrNo =='y' || yesOrNo == 'Y');
	cout<<"total students who got 4 gpa are "<< gpa4 <<endl;
	cout<<"total students who got 3 gpa are "<< gpa3 <<endl;
	cout<<"total students who got 2 gpa are "<< gpa2 <<endl;
	cout<<"total students who got 1 gpa are "<< gpa1 <<endl;
	cout<<"total students who got 0 gpa are "<< gpa0 <<endl;
	
return 0;
}
