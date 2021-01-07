<<<<<<< HEAD
/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 7)
   burger menu(create in five steps 
*/
#include <iostream>
using namespace std;

int main()
{	
	int numBurgers, cheeseChoice,cheeseSlices,fillings,freshChoice,bunsChoice,fLayers = 0, sauceChoice, sauceNumbers = 0;
	float totalPrice = 0.0;
	char loopCheese, fLoop, sauceLoop;
	cout<<"Enter the number of burgers you want to order: ";
	cin>>numBurgers;
	for(int i = 1; i<= numBurgers; i++)	//this loop is used for the number of burgers
	{
		cout<<"	Your Creation in 5 Simple Steps"<<endl;//the logo 
		cout<<"\n          \n1. Choose your bun "<<i<<"\n_________________________\n-------1. Toasted Brioche Style Bun\n-------2. Baker's Bun\n-------3. No Bun - Lettuce Wrap\n"<<endl;
		cout<<"Enter your choice: ";// For choosing bun
		cin>>bunsChoice;
		totalPrice+=0.72;//*****price
		cout<<"Do you want to add cheese?(y for yes): ";
		cin>>loopCheese;	// loop For cheese
		while(loopCheese == 'y' || loopCheese=='Y')
		{
			cout<<"\n       2. Make it cheesy\n _______________________\n\n-------1. Cheddar Cheese\n-------2. Swiss Cheese\n-------3. Colby Jack Cheese\n-------4. McDonalds(R) Classic Cheese\n-------5. Shaved Parmesan\n-------0. Exit"<<endl;
			cout<<"Enter your choice: ";
			cin>>cheeseChoice;
			if(cheeseChoice != 0)
			{
				cout << "Enter the number of slices: ";
				cin >> cheeseSlices;
				totalPrice += 0.5 * cheeseSlices;//******price
			}
			else
			    break;
			
			cout<<"Do you want to add another cheese? Press y for yes and n for no: ";
			cin>>loopCheese;	
		}
		cout<<"\n       3. Turn up the taste\n_________________________\n\n-------1. Rasher Bacon\n-------2. Crispy Bacon\n-------3. Egg\n------4. 113g Angus Beef Patty\n-------5. Guacamole\n-------6. Tortilla Strips\n-------7. Grilled Mushrooms\n--------8. Grilled Pineapple\n";
		cout<<"Enter your filling choice: ";	// here the user will add filings to turn up the taste
		cin>>fillings;
		totalPrice += 1.2;	//*****price
		cout<<"Do you want to freshen your burger?\nPress y for yes and n for no: ";
		cin>>fLoop;		//For freshing the burger up
		fLayers = 0;
		while(fLoop == 'y' && fLayers<=3)	//he can't add more than three fresh'n layers
		{
			cout<<"\n    4. Fresh'n it up\n    _____________________\n\n        1. Whole Leaf Lettuce\n        2. Tomato\n        3. Caramelised Grilled Onions\n        4. Sliced Beetroot\n        5. Red Onion\n        6. Long Sliced Pickle\n        7. Jalepenos\n        0. Exit\n";
			cout<<"Enter your choice: ";
			cin>>freshChoice;
			if (freshChoice == 0)
				break;
			else
			{	
				fLayers++;
				cout<<"Do you want to further freshen it? Press y for yes and n for no: ";
				cin>>fLoop; 
			}
		}
		totalPrice+=0.2 * fLayers;	//*****price
		
		cout<<"Do you want to add a sauce? Press y for yes and n for no: ";
		cin>>sauceLoop; 		// For sauces
		sauceNumbers = 0;
		while (sauceLoop == 'y'|| sauceLoop=='Y')// loop for sauces
		{
			cout<<"\n       5. Get saucy\n____________\n\n-------1. Ketchup\n-------2. Tomato Chilli Jam\n-------3. BBQ\n-------4. Dijonnaise\n-------5. Big Mac(R) Special Sauce\n        6. Aioli\n        7. Herb Aioli\n        8. Chipotle Mayo\n        0. Exit\n";
			cout<<"Enter your choice: ";
			cin>>sauceChoice;
			if(sauceChoice == 0)
			{
				break;
			}
			else
			{
				sauceNumbers++;
			}
			cout<<"Do you want to add another sauce?(Y for yes) : ";
			cin>>sauceLoop;
		}
		totalPrice+=0.3*sauceNumbers;	//******price
	}	
	cout<<"Your total price is"<<totalPrice<<"$"<<endl;
return 0;  
}
=======
/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 7)
   burger menu(create in five steps 
*/
#include <iostream>
using namespace std;

int main()
{	
	int numBurgers, cheeseChoice,cheeseSlices,fillings,freshChoice,bunsChoice,fLayers = 0, sauceChoice, sauceNumbers = 0;
	float totalPrice = 0.0;
	char loopCheese, fLoop, sauceLoop;
	cout<<"Enter the number of burgers you want to order: ";
	cin>>numBurgers;
	for(int i = 1; i<= numBurgers; i++)	//this loop is used for the number of burgers
	{
		cout<<"	Your Creation in 5 Simple Steps"<<endl;//the logo 
		cout<<"\n          \n1. Choose your bun "<<i<<"\n_________________________\n-------1. Toasted Brioche Style Bun\n-------2. Baker's Bun\n-------3. No Bun - Lettuce Wrap\n"<<endl;
		cout<<"Enter your choice: ";// For choosing bun
		cin>>bunsChoice;
		totalPrice+=0.72;//*****price
		cout<<"Do you want to add cheese?(y for yes): ";
		cin>>loopCheese;	// loop For cheese
		while(loopCheese == 'y' || loopCheese=='Y')
		{
			cout<<"\n       2. Make it cheesy\n _______________________\n\n-------1. Cheddar Cheese\n-------2. Swiss Cheese\n-------3. Colby Jack Cheese\n-------4. McDonalds(R) Classic Cheese\n-------5. Shaved Parmesan\n-------0. Exit"<<endl;
			cout<<"Enter your choice: ";
			cin>>cheeseChoice;
			if(cheeseChoice != 0)
			{
				cout << "Enter the number of slices: ";
				cin >> cheeseSlices;
				totalPrice += 0.5 * cheeseSlices;//******price
			}
			else
			    break;
			
			cout<<"Do you want to add another cheese? Press y for yes and n for no: ";
			cin>>loopCheese;	
		}
		cout<<"\n       3. Turn up the taste\n_________________________\n\n-------1. Rasher Bacon\n-------2. Crispy Bacon\n-------3. Egg\n------4. 113g Angus Beef Patty\n-------5. Guacamole\n-------6. Tortilla Strips\n-------7. Grilled Mushrooms\n--------8. Grilled Pineapple\n";
		cout<<"Enter your filling choice: ";	// here the user will add filings to turn up the taste
		cin>>fillings;
		totalPrice += 1.2;	//*****price
		cout<<"Do you want to freshen your burger?\nPress y for yes and n for no: ";
		cin>>fLoop;		//For freshing the burger up
		fLayers = 0;
		while(fLoop == 'y' && fLayers<=3)	//he can't add more than three fresh'n layers
		{
			cout<<"\n    4. Fresh'n it up\n    _____________________\n\n        1. Whole Leaf Lettuce\n        2. Tomato\n        3. Caramelised Grilled Onions\n        4. Sliced Beetroot\n        5. Red Onion\n        6. Long Sliced Pickle\n        7. Jalepenos\n        0. Exit\n";
			cout<<"Enter your choice: ";
			cin>>freshChoice;
			if (freshChoice == 0)
				break;
			else
			{	
				fLayers++;
				cout<<"Do you want to further freshen it? Press y for yes and n for no: ";
				cin>>fLoop; 
			}
		}
		totalPrice+=0.2 * fLayers;	//*****price
		
		cout<<"Do you want to add a sauce? Press y for yes and n for no: ";
		cin>>sauceLoop; 		// For sauces
		sauceNumbers = 0;
		while (sauceLoop == 'y'|| sauceLoop=='Y')// loop for sauces
		{
			cout<<"\n       5. Get saucy\n____________\n\n-------1. Ketchup\n-------2. Tomato Chilli Jam\n-------3. BBQ\n-------4. Dijonnaise\n-------5. Big Mac(R) Special Sauce\n        6. Aioli\n        7. Herb Aioli\n        8. Chipotle Mayo\n        0. Exit\n";
			cout<<"Enter your choice: ";
			cin>>sauceChoice;
			if(sauceChoice == 0)
			{
				break;
			}
			else
			{
				sauceNumbers++;
			}
			cout<<"Do you want to add another sauce?(Y for yes) : ";
			cin>>sauceLoop;
		}
		totalPrice+=0.3*sauceNumbers;	//******price
	}	
	cout<<"Your total price is"<<totalPrice<<"$"<<endl;
return 0;  
}
>>>>>>> b1a20ae31ae4ebc0780031ef6b5ae237953fa6f6
