/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 1)
   take 8-bit binary number one by one from right to left and convert it into decimal
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int binary_number, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, binaryInDeci;   //binaryIndeci is the converted number
	bool flag=true;
	cout<<"hello there!\nThis program will convert 8-bit binary number into decimal"<<endl;
	cout<<"Enter number in 8-digit binary (enter from left to right): ";
	cin>>binary_number;
	if(binary_number>11111111 || binary_number<0)//setting the range for 8-bit binary 
	{
		cout<<"Invalid entry! ";
	}
	else
	{
		if(binary_number%10==1 || binary_number%10==0) //checking to see if the numebers are binary or not
		{
			bit1 = binary_number%10;
			binary_number/=10; // this will remove the last digit and we can evaluate the second last number
			flag=true;
			
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit2 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit3 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit4 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit5 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit6 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit7 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit8 = (binary_number)%10;
			binary_number/=10;
			flag=true;
		}
		else
		{
			cout<<"Invalid entry!"<<endl;
			flag=false;
		}
		if (flag==true)   // if flag is true, only then will the calculation happen
		{	
			binaryInDeci= bit1*pow(2,0)+bit2*pow(2,1)+bit3*pow(2,2)+bit4*pow(2,3)+bit5*pow(2,4)+bit6*pow(2,5)+bit7*pow(2,6)+bit8*pow(2,7);	//multipy the bits with 2^n
			cout<<"the binary number in decimal is "<<binaryInDeci<<endl;
		}
	}
return 0;
}
