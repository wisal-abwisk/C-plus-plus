<<<<<<< HEAD
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
=======
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
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
