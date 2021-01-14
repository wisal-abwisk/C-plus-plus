/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 2)
   calculate total pay for an hourly employee of FOO corporation
*/
#include<iostream>
using namespace std;
int main()
{
	float basePay, hoursWorked, totalPay, overTimePay, overTime;	//overtime is hrs above 40, overTimePay is 1.5 times basepay per overtime hour
	const int max_hours=60, min_hours=0, min_basePay=8;
	cout<<"Enter your base pay per Hour: ";
	cin>>basePay;
	cout<<"Enter the amount of hours you've worked: ";
	cin>>hoursWorked;
	cout<<"\n";
	if ((hoursWorked<=max_hours && hoursWorked>=min_hours) && (basePay>=min_basePay))
	{
		
		if(hoursWorked > 40)			//if hours worked is greater than 40 then 1.5 times the basepay is added
		{
		overTime = hoursWorked - 40 ;
		overTimePay = overTime*(basePay * 1.5);						//1.5 times basepay per hour overtime
		totalPay = ((hoursWorked - overTime) * basePay) + overTimePay;
		}
		else
		{
		totalPay = basePay * hoursWorked ;
		overTime = 0;
		}
		cout<<"your total pay is: "<<"$"<<totalPay<<endl ;
		cout<<"Your overtime is: "<<overTime<<" hrs"<<endl ; 
	}
	else
		cout<<"you entered invalid hours or basepay"<<endl ;
return 0 ;
}
	  
