 #include<iostream>
 #include<fstream>
 #include<string.h>
 
 void characters_cntr();
 
 using namespace std;
 int main()
 {
 	int count=0;
 	string output = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
 	fstream write_string;
 	write_string.open("OUT.txt", ios::out);
 	if(write_string)
 	{
 		write_string << output;
 		cout<<"Written Successfully";
	write_string.close();	
	}
	else
	{
		cout<<" Error in Handling OUT.txt";
	}
	characters_cntr();
return 0;
 }
 void characters_cntr()
 {
 	int cntr=0;
 	char characters;
 	fstream read_string;
 	read_string.open("OUT.txt", ios::in);
 	if(read_string)
 	{
 		while(! read_string.eof())
 		{
		 	read_string>> characters;
		 	cntr++;
		}
	read_string.close();
	}
 	else
 	{
 		cout<<"Cannot open the file"<<endl;
	}
	cout<<"\n"<<cntr<<endl;
}
