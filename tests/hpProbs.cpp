#include <iostream>
#include <string>
using namespace std;
int main()
{
	char newServer, configChanged, condStillExist ; 
	cout<<"Starting General Diagnosis Program."<<endl;
	cout<<"Recoding Symptoms Information - DONE"<<endl;
	cout<<"Rebooting Server to see if condition still exists "<<" -DONE\n";
	cout<<"Is This A Newly installed Server?";
	cin>>newServer;
	if ( newServer == 'y' || newServer == 'Y' )
	{
		cout<<"Please reseat any components that may have come loose during shipping - DONE."<<endl;
		cout<<"Rebooting the sever -DONE"<<endl;
		cout<<"Does condition still exists? ";
		cin>>condStillExist;
	}
	if ( condStillExist == 'y' || condStillExist == 'Y' )
	{
		cout<<"were options added or was the configuration changed recently? ";
		cin>>configChanged;
	}
	if ( configChanged == 'y' || configChanged == 'Y' )
	{
			cout<<"Isolate What Has Changed. Verify it was installed correctly. Restore server to last known working state or original shipped configuration"<<endl;
			cout<<"does condition still exist?";
			cin>>condStillExist;
	}	
	else
	{
		cout<<"Check for service notifications.\nDownload the latest software and firmware from the HP website";
		cout<<"Does Condition still exists? ";
		cin>>condStillExist;
	}
	if ( condStillExist == 'y' || condStillExist == 'Y' )
	{
		cout<<"Isolate and minimize the memory configuration \n";
		cout<<"does condition still exists? ";
		cin>>condStillExist;
		if ( condStillExist == 'y' || condStillExist == 'Y' )
		{
			cout<<"Break server down to minimal configuration\n";
			cout<<"does condition still exists? ";
			cin>>condStillExist;
			if ( condStillExist == 'y' || condStillExist == 'Y' )
			{
				cout<<"troubleshoot or replace basic server spare parts\n ";
				cout<<"does condition still exists? ";
				cin>>condStillExist;
				if ( condStillExist == 'y' || condStillExist == 'Y' )
				{
					cout<<"Ensure the Following information is available:\n.Servey configuration snapshots\n.OS event log file\n.Full crash dump\n ";
					cout<<"Call HP service Provider ";		
				}
				else
				{
					cout<<"Record Symptom and error information on repair tag if sending back a failed part"<<endl;
				}
			}
			else
			{
				cout<<"Add one Part at a time back to configuration to isolate faulty component"<<endl;
				cout<<"does condition still exists? ";
				cin>>condStillExist;
				if ( condStillExist == 'y' || condStillExist == 'Y')
				{
					cout<<"Ensure the Following information is available:\n.Servey configuration snapshots\n.OS event log file\n.Full crash dump\n ";
					cout<<"Call HP service Provider ";
				}
			}
		}
					
	}
	else
	{
		cout<<" Recording all Actions taken for the future."<<endl;
		cout<<"Congratulations, your server problems are solved."<<endl;
	}			
return 0;
} 
