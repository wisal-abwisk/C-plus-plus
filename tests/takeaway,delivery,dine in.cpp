/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 1)
   Write a C++ program that inputs any vowel (upper or lower case) from the user and
display it using *
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int menuChoice,choice,i=0,j=0, cChoice;	//cChoice is for category//menu choice asks to choose the menu, the other choice is used for different purposes like other categories inside menus
	float bill=0,gst_charges=0.16;	//gst_charges for dinein are 16%, so this will be multiplied to the bill
	char yesOrNo;	//yesorno asks whether the user wants to continue or not
	bool mainMenuFlag=false, takeawayFlag=false,dineFlag=false, deliverFlag=false;	//mainmenu flag is used in all those places from where we want to come back to mainmenu, deliverflag and the other flags are used to get out of their respective categories
	do
	{
		cout<<"***************Main Menu**************\n_________________________"<<endl;
		cout<<"Press one to select TAKEAWAY\nPress two to DINE IN\npress three to select DELIVERY\nPress zero to EXIT"<<endl;
		cout<<"Which category you want to choose :";
		cin>>menuChoice;	//asking for the main menu choice, delivery,takeaway,dine in
		if(menuChoice==1)	//menu choice
		{
			do	//do while loop will return here when a user wants to get out of one of the categories(burger,paratha,pakistani food)
			{	
				cout<<"\n__________WELCOME TO TAKEAWAY MENU__________"<<endl;
				cout<<"_____PRESS 1 FOR BURGER_____\n_____PRESS 2 FOR PARATHA ROLL _____\n_____PRESS 3 FOR PAKISTANI FOOD _____\n_____PRESS 9 to END ORDER _____\n_____PRESS 0 FOR MAIN MENU _____"<<endl;
				cout<<"Which catgory you want to choose:";
				cin>>cChoice;
				if(cChoice==1)	
				{
					cout<<"Select burger type:\n1) Mack___________699\n2) Zinger___________599\n3) Hot___________449\n4) Patty Burger___________699\n5) To end order\n6) To exit burger category"<<endl;
					cout<<"burger option :";
					cin>>choice;
					switch(choice)
					{
						case 1:
							bill+=699;
							cout<<"one mack added!";
						break;
						case 2:
							bill+=599;
							cout<<"one zinger added!";
						break;
						case 3:
							bill+=449;
							cout<<"one hot added!";
						break;
						case 4:
							bill+=699;
							cout<<"one patty burger added!";
						break;
						case 5:
							cin.ignore();
							cout<<endl;
						break;
						case 6:
							takeawayFlag=true;	//this flag will return you back to tskeway menu, which means you will exit from burger menu
						break;
						default:
							takeawayFlag=true;
							cout<<"this isn't in the options"<<endl;
					}
				}
				else if(cChoice==2)
				{
					cout<<"\n1) platter___________299\n2) cheese___________349\n3) crispy___________399\n4) double trouble___________699\n5) To end order\n6) To exit paratha roll category"<<endl;
					cout<<"Select paratha roll type:";
					cin>>choice;
					switch(choice)
					{
						case 1:
							bill+=299;
							cout<<"one platter added!";
						break;
						case 2:
							bill+=349;
							cout<<"one cheese added!";
						break;
						case 3:
							bill+=399;
							cout<<"one crispy added!";
						break;
						case 4:
							bill+=699;
							cout<<"one double Trouble added!";
						break;
						case 5:
							cin.ignore();
							cout<<endl;
						break;
						case 6:
							takeawayFlag=true;	//exit paratha roll category means go back to the take away menu
						break;
						default:
							takeawayFlag=true;
							cout<<"this isn't in the opitons"<<endl;		
					}
				}
				else if(cChoice==3)
				{
					cout<<"1) Haleem___________199\n2) Nihaari___________199\n3) Daal___________149\n4) Ghosht___________249\n5) To end order\n6) To exit pakistani food category"<<endl;
					cout<<"Select Pakistani food type:";
					cin>>choice;
					switch(choice)
					{
						case 1:
							bill+=199;
							cout<<"one Haleem added!";
						break;
						case 2:
							bill+=199;
							cout<<"one Nihaari added!";
						break;
						case 3:
							bill+=149;
							cout<<"one Daal added!";
						break;
						case 4:
							bill+=249;
							cout<<"one Ghosht added!";
						break;
						case 5:
							cin.ignore();
							cout<<endl;
						break;
						case 6:
							takeawayFlag=true;
						default:
							takeawayFlag=true;
							cout<<"this isn't in the food options"<<endl;
					}
				}
				else if(cChoice==9)
					cin.ignore();
				else if(cChoice==0)
					mainMenuFlag=true;
				else
				{
					takeawayFlag=true;
					cout<<"this isn't in the options"<<endl;						
				}
				if(mainMenuFlag==false || takeawayFlag==true)
				{
					cout<<"\ndo you want to add anything(y for yes)";
					cin>>yesOrNo;
				}
			}
			while(takeawayFlag==true && (yesOrNo=='y'|| yesOrNo=='Y'));
		}
		else if(menuChoice==2)
		{
			do	//do while loop will return here when a user wants to get out of one of the categories(burger,paratha,pakistani food)
			{	
				cout<<"\n__________WELCOME TO DINE IN MENU__________"<<endl;
				cout<<"_____PRESS 1 FOR BURGER_____\n_____PRESS 2 FOR PARATHA ROLL _____\n_____PRESS 3 FOR PAKISTANI FOOD _____\n_____PRESS 9 to END ORDER _____\n_____PRESS 0 FOR MAIN MENU _____"<<endl;
				cout<<"Which catgory you want to choose:";
				cin>>cChoice;
				if(cChoice==1)
				{
					cout<<"Select burger type:\n1) Mack___________699\n2) Zinger___________599\n3) Hot___________449\n4) Patty Burger___________699\n5) To end order\n6) To exit burger category"<<endl;
					cout<<"burger option :";
					cin>>choice;
					switch(choice)	//this choice is for burgers
					{
						case 1:
							bill+=699;
							cout<<"one mack added!";
						break;
						case 2:
							bill+=599;
							cout<<"one zinger added!";
						break;
						case 3:
							bill+=449;
						cout<<"one hot added!";
						break;
						case 4:
							bill+=699;
							cout<<"one patty burger added!";
						break;
						case 5:
							cin.ignore();
							cout<<endl;
						break;
						case 6:
							dineFlag=true;	//this flag will return you back to tskeway menu, which means you will exit from burger menu
						break;
						default:
							dineFlag=true;
							cout<<"this isn't in the options"<<endl;
					}
				}
				else if(cChoice==2)
				{
					cout<<"\n1) platter___________299\n2) cheese___________349\n3) crispy___________399\n4) double trouble___________699\n5) To end order\n6) To exit paratha roll category"<<endl;
					cout<<"Select paratha roll type:";
					cin>>choice;
					switch(choice)
					{
						case 1:
							bill+=299;
							cout<<"one platter added!";
						break;
						case 2:
							bill+=349;
							cout<<"one cheese added!";
						break;
						case 3:
							bill+=399;
							cout<<"one crispy added!";
						break;
						case 4:
							bill+=699;
							cout<<"one double Trouble added!";
						break;
						case 5:
							cin.ignore();
							cout<<endl;
						break;
						case 6:
							dineFlag=true;	//exit paratha roll category means go back to the take away menu
						break;
						default:
							dineFlag=true;
							cout<<"this isn't in  paratha roll opitons"<<endl;		
					}
				}
				else if(cChoice==3)
				{
					cout<<"1) Haleem___________199\n2) Nihaari___________199\n3) Daal___________149\n4) Ghosht___________249\n5) To end order\n6) To exit pakistani food category"<<endl;
					cout<<"Select Pakistani food type:";
					cin>>choice;
					switch(choice)
					{
						case 1:
							bill+=199;
							cout<<"one Haleem added!";
						break;
						case 2:
							bill+=199;
							cout<<"one Nihaari added!";
						break;
						case 3:
							bill+=149;
							cout<<"one Daal added!";
						break;
						case 4:
							bill+=249;
							cout<<"one Ghosht added!";
						break;
						case 5:
							cin.ignore();
							cout<<endl;
						break;
						case 6:
							dineFlag=true;
						default:
							dineFlag=true;
							cout<<"this isn't in the pakistani food options"<<endl;
					}
				}
				else if(cChoice==9)
					cin.ignore();
				else if(cChoice==0)
					mainMenuFlag=true;
				else
				{
					dineFlag=true;
					cout<<"this isn't in the options"<<endl;						
				}
				for(;j<1;j++)	//loop used so that gst charges arn't added again and againa in one order
					bill+= bill*gst_charges;
				if(mainMenuFlag==false || dineFlag==true)
				{
				cout<<"\ndo you want to add anything(y for yes)";
				cin>>yesOrNo;
				}
			}
			while(dineFlag==true && (yesOrNo=='y'|| yesOrNo=='Y'));
		}
			else if (menuChoice==3)
			{
				do 	//do while loop will return here when a user wants to get out of one of the categories(burger,paratha,pakistani food)
				{	
					cout<<"\n__________WELCOME TO DELIVERY MENU__________"<<endl;
					cout<<"_____PRESS 1 FOR BURGER_____\n_____PRESS 2 FOR PARATHA ROLL _____\n_____PRESS 3 FOR PAKISTANI FOOD _____\n_____PRESS 9 to END ORDER _____\n_____PRESS 0 FOR MAIN MENU _____"<<endl;
					cout<<"Which catgory you want to choose:";
					cin>>cChoice;
					if(cChoice==1)	//CATEGORY CHOICE
					{
						cout<<"Select burger type:\n1) Mack___________699\n2) Zinger___________599\n3) Hot___________449\n4) Patty Burger___________699\n5) To end order\n6) To exit burger category"<<endl;
						cout<<"burger option :";
						cin>>choice;
						switch(choice)
						{
							case 1:
								bill+=699;
								cout<<"one mack added!";
							break;
							case 2:
								bill+=599;
								cout<<"one zinger added!";
							break;
							case 3:
								bill+=449;
								cout<<"one hot added!";
							break;
							case 4:
								bill+=699;
								cout<<"one patty burger added!";
							break;
							case 5:
								cin.ignore();
								cout<<endl;
							break;
							case 6:
								deliverFlag=true;	//this flag will return you back to tskeway menu, which means you will exit from burger menu
							break;
							default:
								deliverFlag=true;
								cout<<"this isn't in the options"<<endl;
						}
					}
					else if(cChoice==2)	//CATEGORY CHOICE
					{
						cout<<"\n1) platter___________299\n2) cheese___________349\n3) crispy___________399\n4) double trouble___________699\n5) To end order\n6) To exit paratha roll category"<<endl;
						cout<<"Select paratha roll type:";
						cin>>choice;
						switch(choice)
						{
							case 1:
								bill+=299;
								cout<<"one platter added!";
							break;
							case 2:
								bill+=349;
								cout<<"one cheese added!";
							break;
							case 3:
								bill+=399;
								cout<<"one crispy added!";
							break;
							case 4:
								bill+=699;
								cout<<"one double Trouble added!";
							break;
							case 5:
								cin.ignore();
								cout<<endl;
							break;
							case 6:
								deliverFlag=true;	//exit paratha roll category means go back to the take away menu
							break;
							default:
								deliverFlag=true;
								cout<<"this isn't in  paratha roll opitons"<<endl;		
						}
					}
					else if(cChoice==3)	//CATEGORY CHOICE
					{
						cout<<"1) Haleem___________199\n2) Nihaari___________199\n3) Daal___________149\n4) Ghosht___________249\n5) To end order\n6) To exit pakistani food category"<<endl;
						cout<<"Select Pakistani food type:";
						cin>>choice;
						switch(choice)
						{
							case 1:
								bill+=199;
								cout<<"one Haleem added!";
							break;
							case 2:
								bill+=199;
								cout<<"one Nihaari added!";
							break;
							case 3:
								bill+=149;
								cout<<"one Daal added!";
							break;
							case 4:
								bill+=249;
								cout<<"one Ghosht added!";
							break;
							case 5:
								cin.ignore();
								cout<<endl;
							break;
							case 6:
								deliverFlag=true;
							default:
								deliverFlag=true;
								cout<<"this isn't in the food options"<<endl;
						}
					}
					else if(cChoice==9)	//9 for ending the order
					cin.ignore();
					else if(cChoice==0)	//CATEGORY CHOICE
						mainMenuFlag=true;
					else
					{
						deliverFlag=true;
						cout<<"this isn't in the options"<<endl;						
					}
					for(;i<1;i++)//delivery charges will be added only once in an order
						bill+=200;	//200 rupees will be added to the bill as delivery charges
					if(mainMenuFlag==false || deliverFlag==true)
					{
						cout<<"\ndo you want to add anything(y for yes)";
						cin>>yesOrNo;
					}
				}
				while(deliverFlag==true && (yesOrNo=='y'|| yesOrNo=='Y'));
		}
		else if(menuChoice==0)
			cin.ignore();
		else
		{
			cout<<"invalid entry!";
			cout<<"this isn't in the options."<<endl;
			mainMenuFlag=true;
		}
		if(mainMenuFlag==true)
		{
			cout<<"do you want to continue?(y for yes)";
			cin>>yesOrNo;
			cout<<endl;
		}
	}
	while(yesOrNo=='Y' || yesOrNo=='y');
	if(bill<1000 && bill>0)
		bill-=(0.05*bill);
	else if(bill>=1000 && bill<1500)
		bill-=(0.10*bill);
	else if(bill>=1500 && bill<2000)
		bill-=(0.15*bill);
	else if(bill>=2000 && bill<2500)
		bill-=(0.20*bill);
	else if(bill>=2500 && bill<3000)
		bill-=(0.30*bill);
	else if(bill>=3000)
		bill-=(0.1*bill);
	else
	{
		cout<<"You didn't buy anything! Thank you for coming here"<<endl;
		return 0;
	}
	cout<<"We've got your order!"<<"\nyour total bill is : "<<bill<<"Rs.\n Thank you for the order";
return 0;
}
