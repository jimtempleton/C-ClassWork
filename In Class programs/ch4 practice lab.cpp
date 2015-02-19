//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//Assignment: chapter 4 praqctice lab
//Description: This program uses a switch statement to display the romaqn
//numeral representsan integer 1-5
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
    int num;// The input integer to convert
    const string myName = "James Templeton";
    const string assignment = "Chapter 4 - in class assignment";
    const string description ="This pgm uses a switch statement to display the ";
    const string description2 ="\nRoman Numeral representation of any integer 1-5.\n\n";
    const string inputPrompt1 = "Enter an integer from 1-5:";
    
    //==============================================================
    //	Output User information:
    //
    cout<<"\n"<< myName;
    cout<<"\n\n"<< assignment;
    cout<<"\n\n"<< description<<"\n\n";
    cout<<description2;
    //
    //==============================================================
    //	Request input from user:
    //
    cout<< inputPrompt1;
    cin >> num; //takes the data from the keyboard
    if (num<1||num>5) cout<< "Number is not valid.\n";//data validation
    else
    {
    	cout<<"\nThe Roman numeral for "<<num<<"is ";
    	//use a switch statement to determine the answer
    	switch(num)
    	{case 1: cout<<"I\n";
    	break;
    	case 2: cout<<"II\n";
    	break;
		case 3: cout<<"III\n";
    	break;
    	case 4: cout<<"IV\n";
    	break;
    	case 5: cout<<"V\n";
    	}// end the switch
    }// END the if
// end the main
    //
   
    //==============================================================
    //	Perform calculations:
    //
    //  no calculations this time
    //==============================================================
    //	Output the results:
    //
    //cout<< "\n"<< outputMessage1;
    //cout<< fixed << showpoint << setprecision(2); //change the format
    //cout<< setw(9)<<actualValue;
    //cout<< outputMessage2;
    //cout<< setw(9)<<assededValue;
    //cout<< outputMessage3;
	//cout<< setw(9)<<annualTax;
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
