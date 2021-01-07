#include<iostream>
#include<unistd.h>
#include<cstdlib>
using namespace std;
int main() 
{
char userInputCharacter;   // User input for some character
int  userInputNumber;      // User input for some numerical value

cout << endl
     << "Choose from among the following options: \n"

     << "   2. Display OK as an animation \n"

     << "Your choice -> ";
cin >> userInputCharacter;
cout << endl;


// Display OK as an animation
if( userInputCharacter == '2') {
    cout << "How many sets of letters do you want to display? -> ";
    cin >> userInputNumber;

    for( int setsOfLetters = 0; setsOfLetters < userInputNumber; setsOfLetters++) {

        // Display some number of blank lines.  This starts as a large number the first time, then
        // gets smaller each subsequent time, moving the ENTIRE set of letters vertically.
        for( int numberOfBlankLines = userInputNumber; numberOfBlankLines > setsOfLetters; numberOfBlankLines--) {
            cout << endl;
        }

        // Display one set of letters, going through and printing one "slice" of each letter at a time.

        int i = 0;
        int j  = 4;
        for( int i=0; i<8; i++) {
            if(      i==0)    cout << "       ";
            else if( i==1) cout    << "       ";
            else if( i==2) cout    << "  **   ";
            else if( i==3) cout    << " *  *  ";
            else if( i==4) cout    << "*    * ";
            else if( i==5) cout    << "*    * ";
            else if( i==6) cout    << " *  *  ";
            else if( i==7) cout    << "  **   ";


            if(      j ==0) cout << "      ";
            else if( j ==1) cout<< "       ";
            else if( j ==2) cout << "*  * ";
            else if( j ==3) cout << "* *  ";
            else if( j ==4) cout << "**   ";
            else if( j ==5) cout << "* *  ";
            else if( j ==6) cout << "*  * ";
            else if( j ==7) cout << "       ";

            cout << endl;


        }//end for( int i...)

        // Clear the screen after the letters are displayed.
        _sleep(185);    // Sleep for 185 milliseconds
        system( "clear");   // Clear the screen.  Comment out this line if you don't want them erased.

    }//end for( int setsOfLetters...

}//end else if( userInputCharacter == '2' ...

return 0;
}//end main()
