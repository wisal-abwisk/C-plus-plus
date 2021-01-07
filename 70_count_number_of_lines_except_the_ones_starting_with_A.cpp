<<<<<<< HEAD
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void count_lines_not_A();

int main()
{
	string line_1 = "The rose is red.", line_2 = "A girl is playing there.", line_3 = "There is a playground.", line_4 = "An aeroplane is in the sky.", line_5 = "Numbers are not allowed in the password.";
	fstream display;
	display.open("STORY.txt", ios::out);
	if(display)
	{
		display << line_1 << endl<< line_2 << endl<< line_3 << endl<< line_4 << endl<< line_5;
		display.close();
	}
	else
	{
		cout << "Unable to open file for write";
	}
	count_lines_not_A();	
	return 0;
}
void count_lines_not_A()
{
	int cntr = 0;
	char story[50];
	fstream lines;
	lines.open("STORY.txt", ios::in);
	if(lines)
	{
		while(! lines.eof())
		{
			lines.getline(story, 50);
			if(story[0] != 'A')
				cntr++;	
		}
		lines.close();
	}
	else
	{
		cout<<"Unable to open file for write";
	}
	cout<<"\n"<<cntr<<endl;	
}

=======
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void count_lines_not_A();

int main()
{
	string line_1 = "The rose is red.", line_2 = "A girl is playing there.", line_3 = "There is a playground.", line_4 = "An aeroplane is in the sky.", line_5 = "Numbers are not allowed in the password.";
	fstream display;
	display.open("STORY.txt", ios::out);
	if(display)
	{
		display << line_1 << endl<< line_2 << endl<< line_3 << endl<< line_4 << endl<< line_5;
		display.close();
	}
	else
	{
		cout << "Unable to open file for write";
	}
	count_lines_not_A();	
	return 0;
}
void count_lines_not_A()
{
	int cntr = 0;
	char story[50];
	fstream lines;
	lines.open("STORY.txt", ios::in);
	if(lines)
	{
		while(! lines.eof())
		{
			lines.getline(story, 50);
			if(story[0] != 'A')
				cntr++;	
		}
		lines.close();
	}
	else
	{
		cout<<"Unable to open file for write";
	}
	cout<<"\n"<<cntr<<endl;	
}

>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
