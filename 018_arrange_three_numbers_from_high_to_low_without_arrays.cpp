<<<<<<< HEAD
//task 05
#include<iostream>
using namespace std;
void sort3(float, float, float);
int main()
{
	float a,b,c;
	char yesOrNo;
	do
	{
		cout<<"Enter the first number:";
		cin>>a;
		cout<<"Enter the second number:";
		cin>>b;
		cout<<"Enter the third number:";
		cin>>c;
		cout<<"The numbers arranged are:";
		sort3(a,b,c);	
		cout<<"\nDo you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');

	
return 0;
}
void sort3(float a, float b, float c)
{
	if(a==b || b==c || a==c)
	{
		cout<<"Numbers are the same"<<endl;
	}
	else
	{
		if(a>b)
		{
			//
			if(c>b)
			{
				float temp=c;
				c=b;
				b=temp;
				if(c>a)
				{
					temp=c;
					c=a;
					a=temp;
				}
			}
			
		}
		if(b>a)
		{
			float temp=b;
			b=a;
			a=temp;
			if(c>a)
			{
				temp=c;
				c=a;
				a=temp;
				if(c>b)
				{
					temp=c;
					c=b;
					b=temp;
				}
			}	
		}
		if(c>b)
		{
			float temp=c;
			c=b;
			b=temp;
			if(c>a)
			{
				temp=c;
				c=a;
				a=temp;
			}
			
		}
	}
	cout<<"\t"<<a<<" "<<b<<" "<<c<<endl;
}

=======
//task 05
#include<iostream>
using namespace std;
void sort3(float, float, float);
int main()
{
	float a,b,c;
	char yesOrNo;
	do
	{
		cout<<"Enter the first number:";
		cin>>a;
		cout<<"Enter the second number:";
		cin>>b;
		cout<<"Enter the third number:";
		cin>>c;
		cout<<"The numbers arranged are:";
		sort3(a,b,c);	
		cout<<"\nDo you want to continue?(y for yes) :";
		cin>>yesOrNo;
	}
	while(yesOrNo=='y'|| yesOrNo=='Y');

	
return 0;
}
void sort3(float a, float b, float c)
{
	if(a==b || b==c || a==c)
	{
		cout<<"Numbers are the same"<<endl;
	}
	else
	{
		if(a>b)
		{
			//
			if(c>b)
			{
				float temp=c;
				c=b;
				b=temp;
				if(c>a)
				{
					temp=c;
					c=a;
					a=temp;
				}
			}
			
		}
		if(b>a)
		{
			float temp=b;
			b=a;
			a=temp;
			if(c>a)
			{
				temp=c;
				c=a;
				a=temp;
				if(c>b)
				{
					temp=c;
					c=b;
					b=temp;
				}
			}	
		}
		if(c>b)
		{
			float temp=c;
			c=b;
			b=temp;
			if(c>a)
			{
				temp=c;
				c=a;
				a=temp;
			}
			
		}
	}
	cout<<"\t"<<a<<" "<<b<<" "<<c<<endl;
}

>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
