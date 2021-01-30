#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char sentence[80];
    cout<<"Input the string: ";
    cin.getline(sentence,80,'\n');
	char first = sentence[0];
    int length=strlen(sentence);
    int check=0;
    sentence[0] = ' ';
    for(int i=length; i>=0; i--)
    {
        if(sentence[i]!=' ')
	    {
            check++;
        }
        else
        {
        	if(i == 0)
               	cout << first;
           	for(int j=i; j<(check + i); j++)
				cout<<sentence[j+1];  	
            cout<<" ";
            check=0;
        }
    }
    return 0;
}

