 
#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

void copyupper();

int main()
{
	string name = "wisal";
	fstream lower_case_write;
	lower_case_write.open("FIRST.txt", ios::out);
	if(lower_case_write)
	{
		lower_case_write <<name;
		lower_case_write.close();
	}
	else
		cout << "Error";
	
	copyupper();
	
return 0;
}

void copyupper()
{
	string name;
	fstream read_lower_case;
	read_lower_case.open("FIRST.txt", ios::in);
	read_lower_case >> name;
	cout<<"\nName before making it capital: "<< name << endl;
	read_lower_case.close();
	
	transform(name.begin(), name.end(), name.begin(), ::toupper);
	
	fstream write_upper_case;
	write_upper_case.open("SECOND.txt", ios::out);
	write_upper_case << name;
	write_upper_case.close();
	
	cout <<"\nName after making it capital: "<< name << endl;
}
