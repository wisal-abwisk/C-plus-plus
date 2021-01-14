<<<<<<< HEAD
/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 2)
   Grid program which shows if you've got the numbers in the same colour
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number1, number2, warningLeft=3, usedNum1, usedNum2, match=1;	//used number is the number that the user have used once, number1 and number2 are the inoput numbers, match is used to increment eac time two numbers are same,it can't be more than 18
	char yesOrNo, colour, green='g', red='r',blue='b', orange='o', grey='w' ;	//grey is w  here, colour stores the values of g,b,o,w,r
	bool flag=false, sameColFlag=true;	// samecolflag is the flag for same colours 
	do
	{
		colour='n';//so that the next time, loop runs,it doesn't save the previous value
		cout<<"________________________________\n|| 1 || 2 || 3 || 4 || 5 || 6 ||\n________________________________\n|| 7 || 8 || 9 || 10|| 11|| 12||\n________________________________\n|| 13|| 14|| 15|| 16|| 17|| 18||\n________________________________\n|| 19|| 20|| 21|| 22|| 23|| 24||\n________________________________\n|| 25|| 26|| 27|| 28|| 29|| 30||\n________________________________\n|| 31|| 32|| 33|| 34|| 35|| 36||\n________________________________"<<endl;
		cout<<"Enter your first number:";
		cin>>number1;
		cout<<"Enter your second number: ";
		cin>>number2;
		if((number1>=1 && number1<=36) && (number2>=1 && number2<=36) && (number1!=number2) &&( (number1!=usedNum1) && (number2!=usedNum1)|| (number1!=usedNum2) && (number2!=usedNum2)))		//condition on used number so that the user can't enter a number already used
		{
			if((number1==1 || number1==6 || number1==7 || number1==12 || number1==17 || number1==20 || number1==28 || number1==33) && (number2==1 || number2==6 || number2==7 || number2==12 || number2==17 || number2==20 || number2==28 || number2==33))	//green 1 6 7 12 17 20 28 33
			{
				colour=green;
				match++;	//match++ will add one as soon as the if condition is true so it can add up to 36
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 

			}
			else if((number1==2 || number1==11 || number1==13 || number1==18 || number1==19 || number1==24 || number1==29 || number1==32) && (number2==2 || number2==11 || number2==13 || number2==18 || number2==19 || number2==24 || number2==29 || number2==32))	
			{
				colour=red;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 

			}
			else if((number1==3 || number1==10 || number1==14  || number1==23 || number1==25 || number1==30 || number1==31 || number1==36) && (number2==3 || number2==10 || number2==14 || number2==23 || number2==25 || number2==30 || number2==31 || number2==36))
			{
				colour=blue;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 

			}
			else if((number1==4 || number1==9 || number1==15 || number1==22 || number1==26 || number1==35) && (number2==4 || number2==9 || number2==15 || number2==22 || number2==26 || number2==33))
			{
				colour=orange;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 
	
			}
			else if((number1==5 || number1==8 || number1==16 || number1==21 || number1==27 || number1==34) && (number2==5 || number2==8 || number2==16 || number2==21 || number2==27 || number2==34))
			{
				colour=grey;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 
	
			}
			else
			{
				sameColFlag=false;	//this means that the numbers are not in the same colour, so it'll display that numbers aren't in the same colour, if else doesn't run, that means that it'll display the colour and say that the numbers are in the same colour 
			}
		}
		else
		{
			cout<<"invalid entry!\n Reasons:\n\t1)your numbers are the sam e. \n\t2)numbers are not in range\n\t3)Numbers already used.\n ";
			cout<<"you've got a warning!\t "<<warningLeft-1<<" chances left"<<endl;
			warningLeft--;
			sameColFlag==true;
		}
		if(flag==true)	// this flag is used to store the value of used number
		{
			usedNum1=number1;
			usedNum2=number2;
		}
		if(sameColFlag==false)		// this statment will only run when both the numbers are not in the same colour
		{
			cout<<number1<<" and "<<number2<<" are not in the same colour."<<endl;
		}
		else //if the flag is true that means that the numbers are in the same colours
		{
			if(colour==green)		// this will print the colour in which the numbers are present
			{
				cout<<"You got it! your numbers in the same green colour "<<endl;
			}
			else 	if(colour==red)
			{
				cout<<"You got it! your numbers in the same red colour! "<<endl;
			}
			else if(colour==blue)
			{
				cout<<"You got it! your numbers in the same blue colour! "<<endl;
			}
			else if(colour==orange)
			{
				cout<<"You got it! your numbers in the same orange colour! "<<endl;
			}
			else	if(colour==grey)
			{
				cout<<"You got it! your numbers in the same grey colour! "<<endl;
			}
		}
		if(match==18)	//maximum matches can be 18 because 36 can have 18 pairs
		{
			cout<<"congrats! you've got 18 matches"<<endl;
		}
		if(warningLeft>0)	// do you want to continue prompt will only be displayed if the warnings are greater than zero
		{
			cout<<"do you want to continue?(y for yes)";
			cin>>yesOrNo;
		}
	}
	while(warningLeft>0 && (yesOrNo=='y'|| yesOrNo== 'Y') && match<=18);	// this loop will run as long as user says y and as long as the warnings are greater than zero, the 18 number is specific because 36 numbers can have 18 pairs of numbers
			
		
	cout<<"Green coloured boxes were :1 6 7 12 17 20 28 33  "<<endl;		// display after the user don't want to try anymore or there are no chances(warnings) left
	cout<<"Red coloured boxes were   :2 11 13 18 19 24 29 32"<<endl;
	cout<<"Blue coloured boxes were  :3 10 14 23 25 30 31 36"<<endl;
	cout<<"Orange coloured boxes were:4 9 15 22 26 35       "<<endl;
	cout<<"Grey coloured boxes were  :5 8 16 21 27 34       "<<endl;
return 0;
}
=======
/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 2)
   Grid program which shows if you've got the numbers in the same colour
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number1, number2, warningLeft=3, usedNum1, usedNum2, match=1;	//used number is the number that the user have used once, number1 and number2 are the inoput numbers, match is used to increment eac time two numbers are same,it can't be more than 18
	char yesOrNo, colour, green='g', red='r',blue='b', orange='o', grey='w' ;	//grey is w  here, colour stores the values of g,b,o,w,r
	bool flag=false, sameColFlag=true;	// samecolflag is the flag for same colours 
	do
	{
		colour='n';//so that the next time, loop runs,it doesn't save the previous value
		cout<<"________________________________\n|| 1 || 2 || 3 || 4 || 5 || 6 ||\n________________________________\n|| 7 || 8 || 9 || 10|| 11|| 12||\n________________________________\n|| 13|| 14|| 15|| 16|| 17|| 18||\n________________________________\n|| 19|| 20|| 21|| 22|| 23|| 24||\n________________________________\n|| 25|| 26|| 27|| 28|| 29|| 30||\n________________________________\n|| 31|| 32|| 33|| 34|| 35|| 36||\n________________________________"<<endl;
		cout<<"Enter your first number:";
		cin>>number1;
		cout<<"Enter your second number: ";
		cin>>number2;
		if((number1>=1 && number1<=36) && (number2>=1 && number2<=36) && (number1!=number2) &&( (number1!=usedNum1) && (number2!=usedNum1)|| (number1!=usedNum2) && (number2!=usedNum2)))		//condition on used number so that the user can't enter a number already used
		{
			if((number1==1 || number1==6 || number1==7 || number1==12 || number1==17 || number1==20 || number1==28 || number1==33) && (number2==1 || number2==6 || number2==7 || number2==12 || number2==17 || number2==20 || number2==28 || number2==33))	//green 1 6 7 12 17 20 28 33
			{
				colour=green;
				match++;	//match++ will add one as soon as the if condition is true so it can add up to 36
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 

			}
			else if((number1==2 || number1==11 || number1==13 || number1==18 || number1==19 || number1==24 || number1==29 || number1==32) && (number2==2 || number2==11 || number2==13 || number2==18 || number2==19 || number2==24 || number2==29 || number2==32))	
			{
				colour=red;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 

			}
			else if((number1==3 || number1==10 || number1==14  || number1==23 || number1==25 || number1==30 || number1==31 || number1==36) && (number2==3 || number2==10 || number2==14 || number2==23 || number2==25 || number2==30 || number2==31 || number2==36))
			{
				colour=blue;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 

			}
			else if((number1==4 || number1==9 || number1==15 || number1==22 || number1==26 || number1==35) && (number2==4 || number2==9 || number2==15 || number2==22 || number2==26 || number2==33))
			{
				colour=orange;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 
	
			}
			else if((number1==5 || number1==8 || number1==16 || number1==21 || number1==27 || number1==34) && (number2==5 || number2==8 || number2==16 || number2==21 || number2==27 || number2==34))
			{
				colour=grey;
				match++;
				flag=true;	//this flag is used, so that two new variables can store the value of numbers. the user won't be able to enter the same numbers again 
	
			}
			else
			{
				sameColFlag=false;	//this means that the numbers are not in the same colour, so it'll display that numbers aren't in the same colour, if else doesn't run, that means that it'll display the colour and say that the numbers are in the same colour 
			}
		}
		else
		{
			cout<<"invalid entry!\n Reasons:\n\t1)your numbers are the sam e. \n\t2)numbers are not in range\n\t3)Numbers already used.\n ";
			cout<<"you've got a warning!\t "<<warningLeft-1<<" chances left"<<endl;
			warningLeft--;
			sameColFlag==true;
		}
		if(flag==true)	// this flag is used to store the value of used number
		{
			usedNum1=number1;
			usedNum2=number2;
		}
		if(sameColFlag==false)		// this statment will only run when both the numbers are not in the same colour
		{
			cout<<number1<<" and "<<number2<<" are not in the same colour."<<endl;
		}
		else //if the flag is true that means that the numbers are in the same colours
		{
			if(colour==green)		// this will print the colour in which the numbers are present
			{
				cout<<"You got it! your numbers in the same green colour "<<endl;
			}
			else 	if(colour==red)
			{
				cout<<"You got it! your numbers in the same red colour! "<<endl;
			}
			else if(colour==blue)
			{
				cout<<"You got it! your numbers in the same blue colour! "<<endl;
			}
			else if(colour==orange)
			{
				cout<<"You got it! your numbers in the same orange colour! "<<endl;
			}
			else	if(colour==grey)
			{
				cout<<"You got it! your numbers in the same grey colour! "<<endl;
			}
		}
		if(match==18)	//maximum matches can be 18 because 36 can have 18 pairs
		{
			cout<<"congrats! you've got 18 matches"<<endl;
		}
		if(warningLeft>0)	// do you want to continue prompt will only be displayed if the warnings are greater than zero
		{
			cout<<"do you want to continue?(y for yes)";
			cin>>yesOrNo;
		}
	}
	while(warningLeft>0 && (yesOrNo=='y'|| yesOrNo== 'Y') && match<=18);	// this loop will run as long as user says y and as long as the warnings are greater than zero, the 18 number is specific because 36 numbers can have 18 pairs of numbers
			
		
	cout<<"Green coloured boxes were :1 6 7 12 17 20 28 33  "<<endl;		// display after the user don't want to try anymore or there are no chances(warnings) left
	cout<<"Red coloured boxes were   :2 11 13 18 19 24 29 32"<<endl;
	cout<<"Blue coloured boxes were  :3 10 14 23 25 30 31 36"<<endl;
	cout<<"Orange coloured boxes were:4 9 15 22 26 35       "<<endl;
	cout<<"Grey coloured boxes were  :5 8 16 21 27 34       "<<endl;
return 0;
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
