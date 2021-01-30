#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	
	char string_1[] = "i am wisal ", string_2[] = "i am hehe";

//tokenizing strings
//	char str[] = "strtok needs to be called several times to split a string";
//	char delimit[] = " ";
//
//	char *ptr = strtok(str, delimit);
//
//	while (ptr != NULL)
//	{
//		cout << ptr << endl;
//		ptr = strtok(NULL, delimit);
//	}


	//again tokenizing
//	char str[] = "good morning Africa, finish your plate";
//	char*ptr = strtok(str, " ");
//	
//	while(ptr!= NULL)
//	{
//		cout<<ptr<<endl;
//		ptr = strtok(NULL," ");

//	}


//	strcpy(string_1, string_2);
//	strncpy(string_1,string_2, 4);
//	cout<<strcmp(string_1,string_2);	//returns 1 if string one is greater, -1 one if smaller and if both are equal
//	cout<<strncmp(string_1,string_2,3);
//	strcat(string_1,string_2);
//	strncat(string_1,string_2, 3);
//	cout<<strlen(string_1);

//	char arr[] = "Four score and seven years ago";
//	char *strPtr;
//	cout << arr << endl;
//	strPtr = strstr(arr, "seven"); // search for "seven"
//	cout << strPtr << endl;

//	char arr_1[] = "i am happy";
//	char* ptr_arr_1 = arr_1;
//	int length = strlen(arr_1);
//	int letters_before_space = 0;
//	
//	for(int i=length; i>0 ; i--)
//	{
//		if(*(ptr_arr_1+i) != ' ')
//		{
//			letters_before_space++;	//it'll count the alphabets before space
//		}
//		else
//		{
//			for(int j=i; j<(letters_before_space + i); j++)	//this'll print from the index where there is a space to the end or the last space.
//			{
//				cout << *(ptr_arr_1+(j+1));
//			}
//			cout<<" ";
//			letters_before_space = 0;
//		}
//	}
	
//	cout<<"\n"<<string_1<<"\n";
//	cout<<string_2;
//	
// different number conversions
//	char str[30];
//	int x=3149;
//	itoa(x, str, 10);	//10 is base
//	cout<<str;	//not all compilers support this



//	int p=7;
//	//cannot dereference
//	void *pvoid = &p;
//	//can reference
//	int *pint = static_cast<int*>(pvoid);


//  int *p;  
//  p = new int; // allocate memory for int
//  if(!p) {
//    cout << "Allocation Failure\n";
//    return 1;
//  }
//
//  *p = 20; // assign that memory the value 20
//  cout << *p; // prove that it works by displaying value
//
//  delete p; // free the memory

	
return 0;
}
