/* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 02 (PROBLEM 3)
   hp
*/
#include <iostream>
using namespace std;
int main()
{
	char newServerCheck, configChanged, condStillExist ; //condstillexist inputs yes or no from the user, congifchanged inputs yes or no for if the configuration has changed, newservercheck inputs yes or no from the user to check if the server is new
	cout<<"Starting General Diagnosis Program."<<endl;
	cout<<"Recoding Symptoms Information - DONE"<<endl;
	cout<<"Rebooting Server to see if condition still exists (y for yes) "<<" -DONE\n";
	cout<<"Is This A Newly installed Server? ";
	cin>>newServerCheck;
	if (newServerCheck == 'y' || newServerCheck == 'Y')   //checking if the server is new
	{
		cout<<"Please reseat any components that may have come loose during shipping - DONE."<<endl;
		cout<<"Rebooting the sever -DONE"<<endl;
		cout<<"Does condition still exists? ";
		cin>>condStillExist;
	}
	else
	{
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
return 0;
} 
