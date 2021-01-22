#include<iostream>
using namespace std;

int main()
{
	int food,water,painkillers,shoes,shirts,pants,pens;
	cout <<" *******WELCOME TO ARMY INVENTORY SYSTEM*******\n";
	cout << "Enter the amount of Food in : ";
	cin >> food;
	cout << "Enter the amount of Water in containers: ";
	cin >> water;
	cout << "Enter the amount of painkillers in boxes: ";
	cin >> painkillers;
	cout << "Enter the amount of Shoes in pairs : ";
	cin >> shoes;
	cout << "Enter the amount of Shirts : ";
	cin >> shirts;
	cout << "Enter the amount of pants : ";
	cin >> pants;
	cout << "Enter the amount of pens in boxes : ";
	cin >> pens;
	
	//if conditions to check availability of inventory stock
	if(food < 10)
		cout<<"Food is running out of stock.\n"<<endl;
	if(water < 10)
		cout<<"water's amount is runnig lower. REFILL\n"<<endl;
	if(painkillers < 10)
		cout<<"painkillers are running out of stock.\n"<<endl;
	if(shoes < 10)
		cout<<"Shoes are running out of stock.\n"<<endl;
	if(shirts < 10)
		cout<<"Shirts are running out of stock.\n"<<endl;
	if(pants < 10)
		cout<<"pants are running out of stock.\n"<<endl;
	if(pens < 10)
		cout<<"pens are running out of stock.\n"<<endl;
	
	// displaying every thing the user have entered	
	cout << "The Amount of Food : "<<food<<" Tons\n";
	cout << "The Amount of Water : "<<water<<" cntrs\n";
	cout << "The Amount of Painkillers : "<<painkillers<<" Boxes\n";
	cout << "The Amount of shoes : "<<shoes<<" pairs\n";
	cout << "The Amount of shirts : "<<shirts<<" shirts\n";
	cout << "The Amount of pants : "<<pants<<" pairs\n";
	cout << "The Amount of pens : "<<pens<<" boxes\n";
	
return 0;
}
