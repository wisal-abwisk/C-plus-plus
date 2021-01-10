#include<iostream>
using namespace std;

bool isPrime(int num);

int main()
{
	bool prime = true;
	int num;
	int* ptr_num;
	ptr_num = &num;

	cout<<"Enter the number : ";
	cin >> num;
	if(*ptr_num > 2)
	{
		if( *ptr_num % 2 == 0)
		{
			cout<<"The prime numbers before The numbers are : ";
  			for (int i = 2; i <= *ptr_num / 2; i++)
    		{
				if (isPrime(i) && isPrime(*ptr_num - i))
				{
      				cout << "{" << i << "," << *ptr_num - i << "}";
      				break;
				}
			}
		}
		else
		{
			cout<<"The number isn't even";
		}
	}
	else
	{
		cout << "{} (number might not be greater than 2 )";
	}
return 0;
}

bool isPrime(int num) 
{ 
    if (num <= 1)
	{ 
        return false; 
	}
	else
	{
		for (int i = 2; i < num; i++) 
        {
			if (num % i == 0) 
            return false;
    	}
    return true;
	}
}
