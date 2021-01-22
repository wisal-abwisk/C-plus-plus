#include<iostream>
#include<fstream>

using namespace std;

int main()
{
 	fstream integers;
 	integers.open("NOTES.txt", ios::out);
 	if(integers)
 	{
 		for(int i=1; i<=100; i++)
		{
			integers<<i<<endl;
		}
		cout<<"Successfully Written integers in NOTES";
	integers.close();	
	}
	else
	{
		cout<<"Error in File Handling";
	}
return 0;
}

