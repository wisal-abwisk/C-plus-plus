 /* NAME : MUHAMMAD WISAL
   SECTION : BS-DS (N)
   ROLL NO : 2OI-0697
   ASSIGNMENT 03 (PROBLEM 4)
   Pascal triangle
   
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int numRows,pattern,n,answer,i,j,k,spaces=0;
	char yesOrNo;
	do
	{
		cout<<"\tPASCAL TRIANGLE"<<endl;
		cout<<"  1--To print the pascal triangle\n  2--to print the pascal and invert of the pascal triangle.\n  3--To print the pascal triangle and invert(2) of the pascal triangle\nEnter the shape you want to print:";
		cin>>pattern;
		switch(pattern)
		{
			case 1:
				cout<<"enter the number of rows:";
				cin>>numRows;
				cout<<endl;
				spaces=numRows;
	  			i=0;
	  			while(i<numRows)		//outer loop for rows
	   			{ 
	      			int k=0;
	      			while(k<spaces)			//nested while (for spaces)
	      			{
	      				cout<<" ";
	     					k++;
					}
					int j=0;
		 	   		while(j<=i)			//nested while(for columns)
    					{ 
    	      				if(j==0)
    	      				{ 
    	        					answer=1;
    	     					}
    	      				else 
    	      				{ 
    	      					answer=(answer*(i-j+1)/j);
    	      				}
    	      					cout<<answer<<" ";
    	      				j++;
    	     
    	   				}
    	    				spaces--;
    	    				i++;
    	    				cout<<endl;
        
    				}
			break;
			case 2 :
				cout<<"enter the number of rows:";
				cin>>numRows;
				cout<<endl;
				spaces=numRows-1;
	  			i=0;
	  			while(i<numRows)		//outer loop for rows
	   			{ 
	   				k=0;
	      			while(k<spaces)			//nested while (for spaces)
	      			{
	      				cout<<" ";
	     					k++;
					}
					j=0;
		 	   		while(j<=i)			//nested while(for columns)
    					{ 
    	      				if(j==0)
    	      				{ 
    	        					answer=1;
    	     					}
    	      				else 
    	      				{ 
    	      					answer=(answer*(i-j+1)/j);
    	      				}
    	      					cout<<answer<<"  ";
    	      				j++;
    	     
    	   				}
    	    				spaces--;
    	    				i++;
    	    				cout<<endl;
        
    				}
    				i = numRows;
				while (i > -1)
				{
					int k = 0;
					while (k<=spaces) 
					{
						cout << " ";
						k++;
					}
	
					j = 0;
					while (j <= i)
					{
						if (j == 0)
						{
							answer = 1;
						}
						else 
						{
							answer = answer * (i - j + 1) / j;
						}
						cout << answer << " ";
						j++;
					}
	
					cout << endl;
					spaces++;
					i--;
				}	
					
			
			
			break;
			case 3:
				cout<<"enter the number of rows:";
				cin>>numRows;
				cout<<endl;
					i = numRows;
				while (i > -1)
				{
					int k = 0;
					while (k<=spaces) 
					{
						cout << " ";
						k++;
					}
	
					j = 0;
					while (j <= i)
					{
						if (j == 0)
						{
							answer = 1;
						}
						else 
						{
							answer = answer * (i - j + 1) / j;
						}
						cout << answer << " ";
						j++;
					}
	
					cout << endl;
					spaces++;
					i--;
				}	
				spaces=0;
				spaces=numRows;
	  			i=0;
	  			while(i<numRows)		//outer loop for rows
	   			{ 
	   				k=0;
	      			while(k<spaces)			//nested while (for spaces)
	      			{
	      				cout<<" ";
	     					k++;
					}
					j=0;
		 	   		while(j<=i)			//nested while(for columns)
    					{ 
    	      				if(j==0)
    	      				{ 
    	        					answer=1;
    	     					}
    	      				else 
    	      				{ 
    	      					answer=(answer*(i-j+1)/j);
    	      				}
    	      					cout<<answer<<"  ";
    	      				j++;
    	     
    	   				}
    	    				spaces--;
    	    				i++;
    	    				cout<<endl;
        
    				}
			
			break;
			default:
				cout<<"Invalid entry!"<<endl;
		}
		cout<<"do you want to try again?";
		cin>>yesOrNo;
		
	}
	while(yesOrNo=='y' || yesOrNo=='Y');
return 0;
}
