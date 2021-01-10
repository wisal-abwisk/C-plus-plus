#include <iostream> 
using namespace std; 
int main() 
{ 

	int i = 12, counter = 5;
	while(i - 1)
	{
		++counter;
		i--;
	}
	cout<<counter;
	
	
    int arr[] = { 4, 5, 6, 7 }; 
//    int* p = (arr + 1); 
    cout << *arr + 10;
    return 0; 
}
