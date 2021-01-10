#include <iostream>
using namespace std;

int main()
{
  int length;
  int* ptr_length;
  ptr_length = &length;
  cout << "Enter n: ";
  cin >> length;
  int array[*ptr_length];
  int *ptr_array;
  ptr_array = &array[0];
  for (int i = 0; i < *ptr_length; i++)
  {
    for (int j = 0; j < *ptr_length; j++)
      *(ptr_array + i) = *ptr_length;
  }
  cout<<"The perfect patch is : \n";
  if (length == 0)
  {
    cout << "[   ]";
  }
  else if (length > 0)
  {
    for (int i = 0; i < *ptr_length; i++)
    {
    cout<<"[";
    for (int j = 0; j < *ptr_length; j++)
    {
      cout << array[i];
      if(j < *ptr_length-1 )
      {
        cout<<", ";
      }
    }
    cout<<"]\n";
    }
  }
  else
  {
    cout << "Invalid input.";  
  }  
return 0; 
}
