//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//Assignment: chapter 4 in class assignment
//Description: This program computes the total purchase with a discount
 based on the number purchased. 
Retail price of the unit is $99.00 before the discount input number
of units purchased.
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
    int numItems;
    double unitPrice=99;
    const string myName = "James Templeton";
    const string assignment = "Chapter 4 - in class assignment";
    const string description ="This program calculates discounts in retail multi purchase";
    const string inputPrompt1 = "Enter the number of units purchased ";
    //const string inputPrompt2 = "input message2";
    //const string outputMessage1 = "\nmessage1";
    //const string outputMessage2 = "\nAssessed Value:  $";
    const string outputMessage3 = "\ntotal cost of items are $";
    //const int int1=0; no int constants 
    //
    //==============================================================
    //	Output User information:
    //
    cout<<"\n"<< myName;
    cout<<"\n\n"<< assignment;
    cout<<"\n\n"<< description<<"\n\n";
    //
    //==============================================================
    //	Request input from user:
    //
    cout<< inputPrompt1;
    cin >> numItems; //takes the data from the keyboard
    //if (numItems<=0) cout<< "bad data, try again\n";//data validation
    //cout<< inputPrompt2;
    //cin>>variable;
    //
    //==============================================================
    //	Test if statements...if, if-else, if-else if-else else if ...else (the else at the end is needed)
    if (taxRate>=2)
    { cout<<"wow that's too high\n";
	}
	else cout << "that's not bad\n";
	//
    //==============================================================
    //	Perform calculations:
    //
    assededValue=0.6*actualValue;
    annualTax=assededValue/100*taxRate;
    //
    //==============================================================
    //	Output the results:
    //
    cout<< "\n"<< outputMessage1;
    cout<< fixed << showpoint << setprecision(2); //change the format
    cout<< setw(9)<<actualValue;
    cout<< outputMessage2;
    cout<< setw(9)<<assededValue;
    cout<< outputMessage3;
	cout<< setw(9)<<annualTax;
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
