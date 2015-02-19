//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//	Assignment: chapter 3 lab practice
//	Description:
//
//==================================================================
//	Include Libraries:
#include <iostream> //controls input and output
#include <cstdlib>  //standard library
#include <iomanip> //This is the formatting library
#include <string> //allows us to use strings
using namespace std; //namespace std uses the c++ std lib
//==================================================================
// 	Start Main program function
//
int main()
{   
    //
    //==============================================================
    //	declare and initialize variables:
    string month1, month2;
	double rain1, rain2, avgrain;
    //double variablename3  = 0.0; //assign it a value
    //double variablename4 = 0.0; //assign it a value
    //int variablename5 = 0; //for integer variables
    const int NUM_MONTHS = 2; // for two months
    const string name = "James Templeton";
    const string assignment = "Ch3 in class program";
    const string description ="This program calculates the average rainfall for two months.";
    //
    //==============================================================
    //	output User information:
    //
    cout<<"\n"<< name;
    cout<<"\n\n"<< assignment;
    cout<<"\n\n"<< description<<"\n\n";
    //
    //==============================================================
    //	Request input from user:
    cout<<"For each month, enter the month name followed by a space\n"
    <<"and then the amount of rain in inches that fell in that month.\n\n";
    //
    cout << "Month 1: ";
    cin >> month1 >> rain1;
    cout << "Month 2: ";
    cin >> month2 >> rain2;
    //
    //==============================================================
    //	Make calculations:
    avgrain=(rain1+rain2)/NUM_MONTHS;
    //
    //==============================================================
    //	Output the results:
    
    cout<<"\nThe average rainfall for " <<month1 <<" and "<<month2<<" is: ";
    cout<< fixed << showpoint << setprecision(2); //changes the formatting
    cout<< avgrain << " inches.\n";
    //
    //==============================================================
    //	Close out the program:
    cout<<"\n\n\n";
    //pause to view numbers
    system("pause");
    //
    return 0; //return 0 - no errors
} //close the brace
