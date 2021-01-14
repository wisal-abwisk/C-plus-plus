/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 6)
*/
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<time.h>
using namespace std;
int main()
{
	int choice;
	int rNum1, rNum2, rNum3, rNum4, rNum5, rNum6, num1, num2, num3, num4, num5, num6;  //5th program variables same are the same numbers, rNum are the random numbers, num are the input numbers
	const int min_num=1, max_num=40;//5th prog variables
	int sameNum=0 ; //5th program variables
	int number1, number2; //4th program variables
	char newServerCheck, configChanged, condStillExist ; // 3rd program variables, condstillexist inputs yes or no from the user, congifchanged inputs yes or no for if the configuration has changed, newservercheck inputs yes or no from the user to check if the server is new
	float basePay, hoursWorked, totalPay, overTimePay, overTime;	// 2nd program varibles ,overtime is hrs above 40, overTimePay is 1.5 times basepay per overtime hour
	const int max_hours=60, min_hours=0, min_basePay=8; //2nd program variables
	int binary_number, bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8, binaryInDeci;   //1st program variables, binaryIndeci is the converted number
	bool flag=true;
	cout<<"______________________________________________________________________\n\tMUHAMMAD_WISAL 20I-0697\n\t Assignment No 02\n\tProgramming Fundamentals\n______________________________________________________________________";
	cout<<"\n\tMAIN MENU\n    1--> Solution to Problem 01\n    2--> Solution to Problem 02\n    3-->Solution to Problem 03\n    4-->Solution to Problem 04\n    5--> Solution to problem 05\n    0-->Exit\n"<<endl;
	cout<<"Enter your choice :";
	cin>>choice;
		switch(choice)
		{
		case 1 : //***************************1****************************
			cout<<"hello there!\nThis program will convert 8-bit binary number into decimal"<<endl;
	cout<<"Enter number in 8-digit binary (enter from left to right): ";
	cin>>binary_number;
	if(binary_number>11111111 || binary_number<0)
	{
		cout<<"Invalid entry! ";
	}
	else
	{
		if(binary_number%10==1 || binary_number%10==0)
		{
			bit1 = binary_number%10;
			binary_number/=10;
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
		if (flag==true)
		{	
			binaryInDeci= bit1*pow(2,0)+bit2*pow(2,1)+bit3*pow(2,2)+bit4*pow(2,3)+bit5*pow(2,4)+bit6*pow(2,5)+bit7*pow(2,6)+bit8*pow(2,7);	//multipy the bits with 2^n
			cout<<"the binary number in decimal is "<<binaryInDeci<<endl;
		}
	}	
	
		break;
		case 2 : //***************************2*********************
			
	cout<<"Enter your base pay per Hour: ";
	cin>>basePay;
	cout<<"Enter the amount of hours you've worked: ";
	cin>>hoursWorked;
	cout<<"\n";
	if ((hoursWorked<=max_hours && hoursWorked>=min_hours) && (basePay>=min_basePay))
	{
		
		if(hoursWorked > 40)			//if hours worked is greater than 40 then 1.5 times the basepay is added
		{
		overTime = hoursWorked - 40 ;
		overTimePay = basePay * 1.5;
		totalPay = ((hoursWorked - overTime) * basePay) + (overTime * overTimePay);
		}
		else
		{
		totalPay = basePay * hoursWorked ;
		overTime = 0;
		}
		cout<<"your total pay is: "<<"$"<<totalPay<<endl ;
		cout<<"Your overtime is: "<<overTime<<" hrs"<<endl ; 
	}
	else
		cout<<"you entered invalid hours or basepay"<<endl ;
		break;
		case 3 : //**********************3***********************
			char newServerCheck, configChanged, condStillExist ; //condstillexist inputs yes or no from the user, congifchanged inputs yes or no for if the configuration has changed, newservercheck inputs yes or no from the user to check if the server is new
	cout<<"Starting General Diagnosis Program."<<endl;
	cout<<"Recoding Symptoms Information - DONE"<<endl;
	cout<<"Rebooting Server to see if condition still exists "<<" -DONE\n";
	cout<<"Is This A Newly installed Server?";
	cin>>newServerCheck;
	if (newServerCheck == 'y' || newServerCheck == 'Y')   //checking if the server is new
	{
		cout<<"Please reseat any components that may have come loose during shipping - DONE."<<endl;
		cout<<"Rebooting the sever -DONE"<<endl;
		cout<<"Does condition still exists? ";
		cin>>condStillExist;
	}
	if (condStillExist == 'y' || condStillExist == 'Y')    //checking if the condition still exists
	{
		cout<<"were options added or was the configuration changed recently? ";
		cin>>configChanged;
	
		if (configChanged == 'y' || configChanged == 'Y')  //nested if checking if the condition still exists
		{
			cout<<"Isolate What Has Changed. Verify it was installed correctly. Restore server to last known working state or original shipped configuration"<<endl;
			cout<<"does condition still exist?";
			cin>>condStillExist;
		}	
		else
		{
		cout<<"Check for service notifications.\nDownload the latest software and firmware from the HP website\n";
		cout<<"Does Condition still exists? ";
		cin>>condStillExist;
		}
	}
	if (condStillExist == 'y' || condStillExist == 'Y') //checking if the condition still exists
	{
		cout<<"Isolate and minimize the memory configuration \n";
		cout<<"does condition still exists? ";
		cin>>condStillExist;
		if (condStillExist == 'y' || condStillExist == 'Y')  //nested if to check if condition still exists
		{
			cout<<"Break server down to minimal configuration\n";
			cout<<"does condition still exists? ";
			cin>>condStillExist;
			if (condStillExist == 'y' || condStillExist == 'Y') //nested nested if to check if the condition still exists
			{
				cout<<"troubleshoot or replace basic server spare parts\n ";
				cout<<"does condition still exists? ";
				cin>>condStillExist;
				if (condStillExist == 'y' || condStillExist == 'Y') //nested nested nested if to check if the cond still exists
				{
					cout<<"Ensure the Following information is available:\n.Servey configuration snapshots\n.OS event log file\n.Full crash dump\n ";
					cout<<"Call HP service Provider ";		
				}
				else  //else of (57) line's if statement
				{
					cout<<"Record Symptom and error information on repair tag if sending back a failed part"<<endl;
				}
			}
			else //else of (52) line's if statement
			{
				cout<<"Add one Part at a time back to configuration to isolate faulty component"<<endl;
				cout<<"does condition still exists? ";
				cin>>condStillExist;
				if (condStillExist == 'y' || condStillExist == 'Y')//if inside else statement
				{
					cout<<"Ensure the Following information is available:\n.Servey configuration snapshots\n.OS event log file\n.Full crash dump\n ";
					cout<<"Call HP service Provider ";
				}
			}
		}
					
	}
	else //else condition of (42) line if statement
	{
		cout<<" Recording all Actions taken for the future."<<endl;
		cout<<"Congratulations, your server problems are solved."<<endl; //prompt shows that the problem is resolved
	}
		break;
		case 4 : //******************4*************************
			
	cout<<"||  1  ||  2  ||  3  ||  4  ||  5  ||  6  ||\n||  7  ||  8  ||  9  ||  10 ||  11 ||  12 ||\n";
	cout<<"|| 13  ||  14 ||  15 ||  16 ||  17 ||  18 ||\n||  19 ||  20 ||  21 ||  22 ||  23 ||  24 ||\n||  25 ||  26 ||  27 ||  28 ||  29 ||  30 ||\n||  31 ||  32 ||  33 ||  34 ||  35 ||  36 ||"<<endl;
	cout<<"Enter the first number: ";
	cin>>number1;
	cout<<"Enter the second number: ";
	cin>>number2;
	if( number1==number2)
	{
		cout<<"You entered the same numbers\n they are in the same colour"<<endl;
	}
	else
	{
		if((number1 > 0 && number1<=36) && (number2 > 0 && number2 <=36))
		{
			if ( (number1==2 || number1==11 || number1==13 || number1==18 || number1==19 || number1==24 || number1==29 || number1==32) && (number2==2 || number2==11 || number2==13 || number2==18 || number2==19 || number2==24 || number2==29 || number2==32) )
			{
			cout<<"Both the colours are in the Red boxes (same colour!)"<<endl;
			}
			else if ( (number1==4 || number1==9 || number1==15 || number1==22 || number1==26 || number1==35) && (number2==4 || number2==9 || number2==15 || number2==22 || number2==26 || number2==35) )
			{
			cout<<"Both the colours are in the Orange boxes (same colour!)"<<endl;
			}
			else if ( (number1==3 || number1==10 || number1==14 || number1==23 || number1==25 || number1==30 || number1==31 || number1==36) && (number2==2 || number2==11 || number2==13 || number2==18 || number2==19 || number2==24 || number2==29 || number2==32) )
			{
			cout<<"Both the colours are in the Blue boxes (same colour!)"<<endl;
			}
			else if ( (number1==5 || number1==8 || number1==16 || number1==21 || number1==27 || number1==34) && (number2==5 || number2==8 || number2==16 || number2==21 || number2==27 || number2==34) )
			{
			cout<<"Both the colours are in the Grey boxes (same colour!)"<<endl;
			}
			else if ( (number1==1 || number1==6 || number1==7 || number1==12 || number1==17 || number1==20 || number1==28 || number1==33) && (number2==1 || number2==6 || number2==7 || number2==12 || number2==17 || number2==20 || number2==28 || number2==33) )
			{
			cout<<"Both the colours are in the Green boxes (same colour!)"<<endl;
			}
			else
			{
			cout<<number1<<" and "<<number2<<" are not in the same coloured box "<<endl;
			cout<<"goodbye!"<<endl;
			}
		}
		else
		{
		cout<<"Invalid Entry!\n you can only enter numbers ranging from 1 to 36 \nGoodbye!"<<endl;
		}
	}
		break;
		case 5 : //********************5*************************************
		srand(time(0));	// for unique random numbers
	rNum1 = rand()%40+1; 
	rNum2 = rand()%40+1; 
	rNum3 = rand()%40+1; 
	rNum4 = rand()%40+1; 
	rNum5 = rand()%40+1; 
	rNum6 = rand()%40+1;
	cout<<"\t LOTTO GAME \n"<<endl; 
	cout<<"Enter your first lottery number between 1 and 40 :";
	cin>>num1;
	cout<<"Enter your second lottery number between 1 and 40 :";
	cin>>num2;
	cout<<"Enter your third lottery number between 1 and 40 :";
	cin>>num3;
	cout<<"Enter your fourth lottery number between 1 and 40 :";
	cin>>num4;
	cout<<"Enter your fifth lottery number between 1 and 40 :";
	cin>>num5;
	cout<<"Enter your sixth lottery number between 1 and 40 :";
	cin>>num6;
	if(rNum1==rNum2 || rNum1==rNum3 || rNum1==rNum4 ||rNum1==rNum5 ||rNum1==rNum6 )
	{
		rNum1=(rand()+1)%40+1;
	}
	if(rNum2==rNum3 || rNum2==rNum4 ||rNum2==rNum5 ||rNum2==rNum6)
	{
		rNum2=(rand()+2)%40+1;
	}
	if(rNum3==rNum4 ||rNum3==rNum5 ||rNum3==rNum6)
	{
		rNum3=(rand()+3)%40+1;
	}
	if(rNum4==rNum5 ||rNum4==rNum6)
	{
		rNum4=(rand()+4)%40+1;
	}
	if(rNum5==rNum6)
	{
		rNum5=(rand()+5)%40+1;
	}
	if( (num1<min_num || num1>max_num) || (num2<min_num || num2>max_num) || (num3<min_num || num3>max_num) || (num4<min_num || num4>max_num) || (num5<min_num || num5>max_num) || (num6<min_num || num6>max_num)) //minimum is 1 and maximun is 40
	{
		cout<<"INVALID ENTRY!"<<endl;
	}
	else
	{
		if(num1==num2 || num1==num3 || num1==num4 || num1==num5 || num5==num6 || num2==num3 || num2==num4 || num2==num5 || num2==num6 || num3==num4 || num3==num5 || num3==num6 || num4==num5 || num4==num6 || num5==num6)
		{
			cout<<"You can't enter the same numbers. \ngoodbye"<<endl;	
		}
		else
		{
			cout<<"The lottery numbers generated by computer are : "<<rNum1<<"  "<<rNum2<<"  "<<rNum3<<"  "<<rNum4<<"  "<<rNum5<<"  "<<rNum6<<endl;
			if(num1==rNum1 || num1==rNum2 || num1==rNum3 || num1==rNum4 || num1==rNum5 || num1==rNum6)
			{
				sameNum++;
			}
			if(num2==rNum1 || num2==rNum2 || num2==rNum3 || num2==rNum4 || num2==rNum5 || num2==rNum6)
			{
				sameNum++;
			}
			if(num3==rNum1 || num3==rNum2 || num3==rNum3 || num3==rNum4 || num3==rNum5 || num3==rNum6)
			{
				sameNum++;
			}
			if(num4==rNum1 || num4==rNum2 || num4==rNum3 || num4==rNum4 || num4==rNum5 || num4==rNum6)
			{
				sameNum++;
			}
			if(num5==rNum1 || num5==rNum2 || num5==rNum3 || num5==rNum4 || num5==rNum5 || num5==rNum6)
			{
				sameNum++;
			}
			if(num6==rNum1 || num6==rNum2 || num6==rNum3 || num6==rNum4 || num6==rNum5 || num6==rNum6)
			{
				sameNum++;
			}
			
			if(sameNum==0) //least same numbers between random and entered numbers
			{
				cout<<"Your lottery numbers don't match any number. Thanks for playing the lottery game"<<endl;
			}
			else if(sameNum==6) // max same numbers between random and entered numbers
			{
				cout<<"Congratulations!!! You won the jackpot!"<<endl;
			}
			else if(sameNum>0 && sameNum<6)
			{
				cout<<"you've won "<<sameNum<<" Stars :";
				if(num1==rNum1 || num2==rNum1 || num3==rNum1 || num4==rNum1 || num5==rNum1 || num6==rNum1)
				{
					cout<<rNum1<<" ";
				}
				if(num1==rNum2 || num2==rNum2 || num3==rNum2 || num4==rNum2 || num5==rNum2 || num6==rNum2)
				{
					cout<<rNum2<<" ";
				}
				if(num1==rNum3 || num2==rNum3 || num3==rNum3 || num4==rNum3 || num5==rNum3 || num6==rNum3)
				{
					cout<<rNum3<<" ";
				}
				if(num1==rNum4 || num2==rNum4 || num3==rNum4 || num4==rNum4 || num5==rNum4 || num6==rNum4)
				{
					cout<<rNum4<<" ";
				}
				if(num1==rNum5 || num2==rNum5 || num3==rNum5 || num4==rNum5 || num5==rNum5 || num6==rNum5)
				{
					cout<<rNum5<<" ";
				}
				if(num1==rNum6 || num2==rNum6 || num3==rNum6 || num4==rNum6 || num5==rNum6 || num6==rNum6)
				{
					cout<<rNum6<<" ";
				}
			}
		}
	}
		break;
		case 0 :
			cout<<"goodbye!"<<endl;
		break;
		default :
			cout<<"invalid entry!";
		}
return (choice);
}
