#include<iostream>
#include<iomanip>
#include<string.h>
#include<math.h>
using namespace std;
int x=5;
void function();
void funct(int);
int main()
{
	//initialization
//	int a,b,c,d;
//	a,b,c,d=10;
//	cout<<a<<" "<<b<<" "<<c<< " "<<d;

//	type casting
//	double a=51.43;
////	a = int(a);
//	a = (int)a;
//	cout<<a;

	//iomanip
//	float x=12.33;
//	cout<<right<<x;

	//getline, cin line and string
//	string a;
//	cout<<"\nEnter string: ";
//	getline(cin, a);
//	cout<<a;
//	
//	char array[30];
//	cout<<"\nEnter array: ";
//	cin.getline(array, 30,'\n');
////	cin.get(array, 30,'\n');	//the same as above
//	cout <<array;

	//math library functions
//	int x=6, y=9, z; 
//	float k=3.9;
//	cout<<ceil(k)<<" "<<floor(k);
//	x = sqrt(9);
//	z = fmod(y,x);
//	x = cos(x);
//	cout<<x;
//	cout<<endl;
//	cout<<y;
//	cout<<endl;
//	cout<<z;
//	cout<<"phew"
//		<<"babooza";
		
	//TERNARY OPERATORS	
//	int grade;
//	cin >> grade;
//	grade >= 60 ? cout << "Passed" : cout << "Failed";

//	int x=6, y=45, result;
//	result = x >=y;
//	cout<<result;	//returns true or false
	//exploring breaks
//	switch (x) //integer
//	{                   
//		case 6: 
//			cout << "Case 6 \n";
//		case 7:
//			cout << "Case 7 \n";
//			break;
//		case 11:
//			cout << "Case 11 \n";
//		default:
//			cout << "Case default \n";
//	}


	//register
//	register int count;
//	auto int corty;
//	cout<<count;
	
//	function();
//	int array[5];
//	array[3] =6;
//	funct(array[3]);

	//const pointers
	int x=3, y=7,array[5];
	char word[20];
//	char *suit[ 4 ] = {"Hearts", "Diamonds","Clubs", "Spades" };	//warning
//	cin >> setw( 20 ) >> word;
//	cout<<word;
//	const int *const ptr =&x;
////	*ptr =7;
//	ptr =&y;
	
//	int* ptr = array;
//	*ptr =5;
//	*++ptr = 6;
//	ptr+=2;
//	*ptr =9; 
//	
////	*ptr = &y;
//	for(int i=0; i<5;)
//	cout<<array[i++]<<" ";

	
return 0;
}
void funct(int array_element)
{
//	array_element = 5;
//	cout<<array_element;
}
void function()
{
	extern int x;
//	cout<<x;
	
	//static
//	for(int i=0; i<10; i++)
//	{
//		static int y =5;
//		y+=10;
//		cout<<y<<endl;
//	}
	
}
