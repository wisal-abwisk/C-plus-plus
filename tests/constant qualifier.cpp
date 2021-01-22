#include<iostream>
using namespace std;

int main()
{
	int* ptr_num = new int (5);
//	const int *ptr_num;
//	ptr_num = &num;
	
	*ptr_num = *ptr_num + 1;
	cout << *ptr_num;
return 0;
}
