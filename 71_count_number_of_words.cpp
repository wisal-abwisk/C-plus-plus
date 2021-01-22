 #include<iostream>
 #include<fstream>
 #include<string.h>
 
 void count_words();
 
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
 		cout<<"Written Successfully\n";
	write_string.close();	
	}
	else
	{
		cout<<" Error in Handling OUT.txt";
	}
	count_words();
return 0;
 }
 
 void count_words()
 {
 	int cntr=0;
 	string word;
 	fstream read_string;
 	read_string.open("OUT.txt", ios::in);
 	if(read_string)
 	{
 		while(! read_string.eof())
 		{
		 	read_string >> word;
			cntr++;
 		}
 		cout<<"Read Successfully\n";
	read_string.close();	
	}
	else
	{
		cout<<" Error in Handling OUT.txt\n";
	}
	cout << cntr << endl;
 }

