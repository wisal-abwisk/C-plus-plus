#include<iostream>
using namespace std;
int main()
{
	float obtMarks,totalMarks;
	float percentage;
	char grade;
	cout<<"Enter your obtained marks:";
	cin>>obtMarks;
	cout<<"Enter your total marks:";
	cin>>totalMarks;
	percentage=(obtMarks/totalMarks)*100;
	  if (percentage>=90)
	  {
	    cout<<"Grade = "<<"A+\n very Nice deer"<<endl;
	  }
	  else if (percentage<90 && percentage>=80)
	  {
	    cout<<"Grade ="<<"A\n WOW! grape!!"<<endl;   
	  }
	  else if (percentage<80 && percentage>=70)
	  {
	    cout<<"Grade ="<<"B\n shabash! keep it up"<<endl;
	  }
	  else if (percentage<70 && percentage>=60)
	  {
	    cout<<"Grade ="<<"C\n not bad"<<endl;
	  }
	  else if (percentage<60 && percentage>=50)
	  {
	    cout<<"Grade ="<<"D\n that was a close one"<<endl;
	  }
	  else
	  {
	    cout<<"Grade ="<<"F\n kabhi parh v liya kar"<<endl;
	  }
	cout<<"Your percentage is "<<percentage<<endl;
return 0;
}
	
