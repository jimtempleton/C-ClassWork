//===================================================
//	Jim Templeton
//	COSC 1337
//	Spring 2015
//	jimtempletonatx@gmail.com
//	512-507-4051
//====================================================
//	Assignment:	Chapter 3 in class program
//===================================================
//	This program converts a Celsius temp to a Fahrenheit temp
//===================================================
//	Include required Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip> ;
//#include <string>
//===============================================
// 	Need to access files iostream
using namespace std; 
// ==================================================
//	begin function program named "main()" 
int main() 
{ 
//==================================================
//	Define required variables 
double tempCelsius,	//Temperature in Celsius 
tempFahrenheit; 		//Temperature in Fahrenheit 
//int variableName;		//Set integer variables
//==================================================
// 	Output user information to the monitor 
cout << “\nJim Templeton\n\n"; 
cout << “Chapter 3 In Class\n\n”; 
cout << "This program converts Celsius temperature to Fahrenheit.\n\n"; 
// ==================================================
//	Request input from user 
cout << "Enter a Celsius temperature: "; 
cin >> tempCelsius; 
//==================================================
//	Perform calculations
tempFahrenheit = (9.0/5.0) * tempCelsius + 32; 
//==================================================
// 	Display Output information
cout << "\n" << tempCelsius << " degrees Celsius is equal to "; 
// 	Output Celsius with one digit to the right of the decimal 
// 	Format answer 
cout << fixed << showpoint << setprecision(1); 
// 
// Output Answer 
cout << tempFahrenheit << " degrees Fahrenheit.\n"; 
// 
// Skip two blank lines 
cout << "\n\n\n"; 
// ================================================
// 	Stop programming from executing - view answers 
system("pause"); 
// 
// Return error flag 
return 0; 
} 
