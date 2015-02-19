//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//Assignment: chapter 3 Home Work
//Description: Madison County collects taxes on the assessed value 
//of property, which is 60% its actual value. At last year’s tax rate 
//of $2.64 for each $100 of assessed value, the annual property tax 
//for this house would be $2502.72.  
//Write a program that asks the 
//user to input the actual value of a piece of property and
//The program should then calculate and report how much annual propert
//tax the homeowner will be charged for this property.
//
//==================================================================
//	Include Libraries:
#include <iostream> //controls input and output
#include <cstdlib>  //This is the standard C++ library
#include <iomanip> //This is the formatting library
#include <string> //allows us to use strings
using namespace std; //namespace std uses the c++ std lib
//==================================================================
// 	Start the Main program function
//
int main()
{   
    //
    //==============================================================
    //	Declare and initialize variables:
    //
    //int int1, int2, int3=0 No integers for this program
    double actualValue, assededValue,taxRate =0, annualTax; //need a floating point value
    const string myName = "James Templeton";
    const string assignment = "Chapter 3 - Homework";
    const string description ="This program calculates proprty taxes on the assesed value of property, which\nis 60 percent of its actual value.";
    const string inputPrompt1 = "Enter the actual property value: $";
    const string inputPrompt2 = "Enter the amount of tax per $100 of assesed value: $";
    const string outputMessage1 = "\nProperty Value:  $";
    const string outputMessage2 = "\nAssessed Value:  $";
    const string outputMessage3 = "\nProperty Tax:    $";
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
    cin >> actualValue; //takes the data from the keyboard
    cout<< inputPrompt2;
    cin>>taxRate;
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
