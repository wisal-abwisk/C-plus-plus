//Aeiman Imtiaz  - 20i-0757
//Miral Fatima   - 20i-0844
//Sana Fatima    - 20i-0658
//Spinner Firework

#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

// function prototypes

void nextStep (int count, int *nextStepDirection, int *cursorXPosition, int *cursorYPosition, int coordinates[20][30]);  // function to change direction
void stepRight (int count, int *cursorXPosition, int *cursorYPosition,int coordinates[20][30]); 
void stepUp (int count, int *cursorXPosition, int *cursorYPosition, int coordinates[20][30]);
void stepDown (int count, int *cursorXPosition, int *cursorYPosition, int coordinates[20][30]);
void stepLeft (int count, int *cursorXPosition, int *cursorYPosition, int coordinates[20][30]);
void printArr (int coordinates[20][30]); // function to print the firework when the conditions are true
void initializeArray (int coordinates[20][30]); // function to initialize array to 0
//



// function to print stars

void printstar (int stars = 3) // using default parameter
// stars = 3 means that only 3 stars would be printed by default
//  passing any argument in this function will print that number of stars 

{
  int space = 60;   // this is to define appropriate space where stars would be printed to maintian the spiral shape
  for (int i = 0; i < stars; i++)
    {
      cout << setw (space) << "*" << endl;
      space = space - 2;
      usleep (180000);
    }
}
//


                               

 
// main function


int main ()
{
  //displaying name and roll numbers
  
  cout << setw (50) << endl;
  cout << "Group Members : Miral Fatima_20i-0844" << setw (50) << endl;
  cout << "                Aeiman Imtiaz_20i-0757" << setw (50) << endl;
  cout << "                Sana Fatima_20i-0658" << setw (50) << endl;

  cout << "                       ------------------------------------------"<< setw (50) << endl;
  cout << "FIREWORKS PROJECT" << setw (50) << endl << endl << endl;
  cout << "Press any character to Print Firework" << endl;
  char t;
  cin >> t;
  
 // using while condition to display the firework infinitely
 
  while(true)
  {
   //calling functions
  int nextStepDirection = 1; 
  int cursorXPosition = 10;
  int cursorYPosition = 10;
  int coordinates[20][30];
  cursorXPosition = 12;  //setting a center position 
  cursorYPosition = 12;
  initializeArray (coordinates);  // this is to initialize the whole array to 0
  coordinates[cursorXPosition][cursorYPosition] = -1;
  for (int a = 1; a <= 10; a++)
    {
      nextStep (a, &nextStepDirection, &cursorXPosition, &cursorYPosition,
		coordinates);
    }
  printArr (coordinates);
  printstar ();
  cout << endl;
  }
  return 0;
}
//





// function to specify the next direction in which the dots will be printed


void nextStep (int count, int *nextStepDirection, int *cursorXPosition, int *cursorYPosition, int coordinates[20][30])

  /*according to the cases specified, the up,down,left and right functions are called and then the next step is specified
   for example when next step direction is 1, the direction is changed to right and then the next step direction becomes 2 so that the direction can e changed   again*/
   
{
  switch (*nextStepDirection)
    {
    case 1: 
      stepRight (count, cursorXPosition, cursorYPosition, coordinates);
      *nextStepDirection = 2;
      break;

    case 2:
      stepDown (count, cursorXPosition, cursorYPosition, coordinates);
      *nextStepDirection = 3;
      break;

    case 3:
      stepLeft (count, cursorXPosition, cursorYPosition, coordinates);
      *nextStepDirection = 4;
      break;

    case 4:
      stepUp (count, cursorXPosition, cursorYPosition, coordinates);
      *nextStepDirection = 1;
      break;

    default:
      break;
    }
}

//






// function to print the dots in upward direction

void stepRight (int count, int *cursorXPosition, int *cursorYPosition,
	   int coordinates[20][30])
{
  for (int i = 0; i < count; i++)
    {
      *cursorYPosition += 2;
      if (i != count - 1)
	{
	  coordinates[*cursorXPosition][*cursorYPosition] = -1; // at the specific position when the condition is specified , the 0 in the array is changed to -1
	}
      printArr (coordinates);
      usleep (150000); // specifying the speed in which the dots will be printed
    }
}

//





// function to print dots in upward direction

void stepUp (int count, int *cursorXPosition, int *cursorYPosition,
	int coordinates[20][30])
{
  for (int i = 0; i < count; i++)
    {
      *cursorXPosition = *cursorXPosition - 1;
      if (i != count - 1)
	{
	  coordinates[*cursorXPosition][*cursorYPosition] = -1;
	}
      printArr (coordinates);
      usleep (150000);
    }
}

//





// function to print in downward direction

void stepDown (int count, int *cursorXPosition, int *cursorYPosition,
	  int coordinates[20][30])
{
  if (count == 10)
    /* 
       This is bacause on the end interation of main for loop the control will end the 
       spiral shape on this funciton at count value 10, so for the last iteration we want to 
       print 12 instead of 10 dots to make it look like spiral
     */
    {
      count = count + 1;
    }

  for (int i = 0; i < count; i++)
    {
      *cursorXPosition = *cursorXPosition + 1;
      if (i != count - 1)
	{
	  coordinates[*cursorXPosition][*cursorYPosition] = -1;
	}
      printArr (coordinates);
      usleep (150000);
    }
}

//






// function to print in downward direction

void stepLeft (int count, int *cursorXPosition, int *cursorYPosition,
	  int coordinates[20][30])
{
  for (int i = 0; i < count; i++)
    {
      *cursorYPosition -= 2;
      if (i != count - 1)
	{
	  coordinates[*cursorXPosition][*cursorYPosition] = -1;
	}
      printArr (coordinates);
      usleep (150000);
    }
}

//





// function to print the dots


void printArr (int coordinates[20][30])
{
  system ("clear"); // to clear the screen
  static int maxValueOfXDimension = 18;
  static int maxValueOfYDimension = 30;
  /* 
     beacuse printArr function is frequently invoked everytime when we
     invoke the function because of their static behavior they donot get changed
     when the new function call is arrived. the value for  maxValueOfXDimension and maxValueOfYDimension
     will remain same for all the funciton calls for this particular funtion 
   */

  for (int i = 0; i < maxValueOfXDimension; i++)
    {
      cout << setw (40);
      for (int j = 0; j < maxValueOfYDimension; j++)
	{
	  char ch = (coordinates[i][j] != 0) ? '.' : ' ';
	  cout << ch;
	}
      cout << endl;
    }
}

//




//function to set the array to 0


void initializeArray (int coordinates[20][30])
{
  for (int i = 0; i < 20; i++)
    {
      for (int j = 0; j < 30; j++)
	{
	  coordinates[i][j] = 0;
	}
    }
}

//







