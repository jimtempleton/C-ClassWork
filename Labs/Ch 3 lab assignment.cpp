//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//	Assignment: chapter 3 lab
//	Description: This program calculates the average of three test scores.
//	The three test scores will be entered by the user.
//	The sum of the three test scores will be calculated and the average
//	of these scores will be calculated.  Output will be the average of three scores.
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
    const int NUM_TEST=3;
    int test1, test2, test3, acum=0; //set the acumulator to 0
    double average; //need a fp output
    const string name = "James Templeton";
    const string assignment = "Chapter 3 Lab";
    const string description ="This program calculates the average of three test scores.";
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
    cout<<"Enter 3 test scores separated by one or more spaces.\n";
    cin >> test1 >> test2>> test3;
    //
    //==============================================================
    //	Make calculations:
    acum = test1 + test2 +test3;
    average = acum/NUM_TEST;
    //
    //==============================================================
    //	Output the results:
    //
    cout<<"\nThe average of the 3 scores is ";
    cout<< fixed << showpoint << setprecision(1); //changes the formatting
    cout<< average;
    //
    //==============================================================
    //	Close out the program:
    cout<<"\n\n\n";
    //pause to view numbers
    system("pause");
    //
    return 0; //return 0 - no errors
} //close the brace
