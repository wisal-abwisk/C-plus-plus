<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
	int i,j,num_students, pass;
	cout<<"***MARKS OF STUDENTS***"<<endl;
	cout<<"Enter the number of students:";
	cin>>num_students;
	int marks_of_students[num_students];
	for(i=0 ; i<num_students ; i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" :";
		cin>>marks_of_students[i];
	}
	pass=0;
	for(j=0 ; j<num_students ; j++)
	{
		if(marks_of_students[j]>33)
		pass++;
	}
	cout<<"The number of pass students are "<<pass<<"\nThe number of failed students are "<<num_students-pass<<endl;
return 0;
}
=======
#include<iostream>
using namespace std;
int main()
{
	int i,j,num_students, pass;
	cout<<"***MARKS OF STUDENTS***"<<endl;
	cout<<"Enter the number of students:";
	cin>>num_students;
	int marks_of_students[num_students];
	for(i=0 ; i<num_students ; i++)
	{
		cout<<"Enter the marks of student "<<i+1<<" :";
		cin>>marks_of_students[i];
	}
	pass=0;
	for(j=0 ; j<num_students ; j++)
	{
		if(marks_of_students[j]>33)
		pass++;
	}
	cout<<"The number of pass students are "<<pass<<"\nThe number of failed students are "<<num_students-pass<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
