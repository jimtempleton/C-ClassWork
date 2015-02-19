//==================================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jim.templetonatx@gmail.com
//	512-507-4051
//==================================================================
//Assignment: chapter 4  lab
//Description: This program allows the user to calculate the area of a rectangle and triangle.
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
    const string description ="This program allows the user to calculate the area of a\nrectangle and triangle.\n";
    const string description1 = "\nGeometry Calculator:\n\n";
    const string menu1 = "1. Calculate the area of a Rectangle";
    const string menu2 = "2. Calculate the area of a Triangle";
    const string menu3 = "3. Quit\n";
    int choice;
    const string inputPrompt1 = "\nEnter your choice (1-3): ";
    const string inputPrompt2 = "\nEnter the rectangle's length: ";
    double lengthR;
    const string inputPrompt3 = "Enter the rectangle's width: ";
    double width;
    double areaR;
    const string inputPrompt4 = "\nEnter the length of the base: ";
    double base;
    const string inputPrompt5 = "Enter the triangle's height: ";
    double height;
    double areaT;
    const string outputmessage1 = "\nThe area is ";
    //==============================================================
    //	Output User information: 
    //
    //cout<<"\n"<< "James Templeton";
    //cout<<"\n\n"<< "CH 4 Lab;
    cout<<description;
    cout<<description1;
    cout<<menu1<<"\n";
    cout<<menu2<<"\n";
    cout<<menu3<<"\n";
    //
    //==============================================================
    //	Request input from user:
    //
    cout<< inputPrompt1;
    cin >> choice; //1, 2, or 3
    if (choice>0&&choice<4)
    	//use a switch statement to determine the answer
    	switch(choice)
    	{case 1: 
			cout<< inputPrompt2; cin>> lengthR;
			cout<< inputPrompt3; cin>> width;
			if(lengthR<0||width<0) cout<< "Error - Length and Width must be positive numbers";
			else
			{areaR=lengthR * width;
			cout<< fixed << showpoint << setprecision(2); //change the format
			cout<<outputmessage1<<areaR;
			}
    	break;
    	case 2:
    		cout<< inputPrompt4; cin>> base;
			cout<< inputPrompt5; cin>> height;
			if(base<0||height<0) cout<< "Error - base and height must be positive numbers";
			else
			{areaT=(base * height)/2;
			cout<< fixed << showpoint << setprecision(2); //change the format
			cout<<outputmessage1<<areaT;
			}
		break;
    	case 3:
    		cout<<"Bye";
    	break;
    	}// end the switch
    else
    {cout<<"You may only enter 1, 2, or 3.\n";
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
