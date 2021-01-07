#include<iostream>
using namespace std;
int main()
{
	char name,gender;
	cout<<"LET'S SEE WHO YOU TRULY ARE\n ENTER The first letter of your NAME:";
	cin>>name;
	    if (name>='A' && name<='Z' || name>='a' && name<='z')
	    {
	         cout<<"you've got an interesting letter in your name!\n"; 
	         cout<<"Your gender?(f/m):";
	         cin>>gender;
	     	if (gender=='f' || gender=='F')
	     	{
	     	    cout<<"SO YOU ARE A FEMALE!   Very nice deer\n";
	     	}
	     	else if (gender=='M' || gender=='m')
	     	{
	     	    cout<<"YOU ARE A DUDE! Tu Mera Puttar ja Chutti kar"<<endl;
	     	}
	     	else
	     	{
	     	    cout<<"TU BAAZ AJA, MASTI KAR RAHA HAI TU\nBARI HARAM MOUT MARNA HAI TU NAY"<<endl;
	     	}
	    }
	 else
	 {
	 	cout<<"YE Kya naam diya hai   robot kee aulad  daffa ho"<<endl;
	 }
return 0;
}	      
	
