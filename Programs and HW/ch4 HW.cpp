//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//Assignment: chapter 4  Home Work
//Description: This program calculates bank fees acording to:
//$0.10 for fewer than 20 checks
//$0.08 for 20-39 checks
//$0.06 for 40 - 59 checks
//$0.04 for 60 or more checks
//
//==================================================================
//	(1) Include Libraries:
#include <iostream> //controls input and output
#include <cstdlib>  //This is the standard C++ library
#include <iomanip> //This is the formatting library
#include <string> //allows us to use strings
using namespace std; //namespace std uses the c++ std lib
//==================================================================
// 	(2) Start the Main program function
//
int main()
{   
    //
    //==============================================================
    // (3) Declare and initialize variables:
    //
    int numChecks;
    const string error = "Number of checks must be zero or more.  Run program again.\n\n ";
    
    //==============================================================
    //	Output User information: 
    //
    cout<<"\n"<< "James Templeton";
    cout<<"\n\n"<< "Chapter 4 - Homework";
    cout<<"\n\n"<<"This program computes a bank customer's checking account fees for a month.";
    //
    //==============================================================
    //	Request input from user:
    //
    cout<<"\n\n"<<"Enter number of checks written this month: ";
    cin >> numChecks; //must be 0 or more
     cout<< fixed << showpoint << setprecision(2);
    if (numChecks>0)
    {
    	if (numChecks<20)cout<< "The bank fee this month is $"<<0.1*numChecks<<" for "<<numChecks<<" checks.";
    	else if (numChecks<40) cout<< "The bank fee this month is $"<<0.08*numChecks<<" for "<<numChecks<<" checks.";
    	    else if (numChecks<60) cout<< "The bank fee this month is $"<<0.06*numChecks<<" for "<<numChecks<<" checks.";
     		  else if (numChecks>=60) cout<< "The bank fee this month is $"<<004*numChecks<<" for "<<numChecks<<" checks.";
    	
    }
    else
    {cout<<error;
    }
// END the if
// end the main

    //
    //==============================================================
    //	Close out the program:
    //
    cout<<"\n\n\n"; //skip one line less than the number of \n 
    //
    system("pause");//pause to view output on the display
    //
    return 0; //return 0 indicates the program didn't stop on errors
    //
}   //======================= The End ==============================
