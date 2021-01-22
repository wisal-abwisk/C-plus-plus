#include<iostream>
using namespace std;

int main()
{
char a[] = { 'A', 'B', 'C', 'D' };
char* ppp = &a[0];
*ppp++;
cout << ++*ppp;
cout << --*ppp;
}
