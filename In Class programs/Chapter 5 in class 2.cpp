// Jim Templeton
//Chapter 5 - in class 2 
// This program calculates the salary after raise, 
// new salary adn total earnings in the period
// 
// =============Include the required libraries========
//
#include <iostream> // needed for io from keyboard
//#include <string> // no strings used in this program
#include <iomanip> // for input putut formatting
#include <cstdlib> // standard library needed
//
using namespace std; // Don't know what this does
//
int main()
{
	// ======== define and set variables==============
	const double RATE = 0.05;
	double salary =0.0;
	double raise = 0.0;
	double totalSalary = 0.0;
	int years = 0, count = 0;
	//
	// =========Output user info=====================
    cout << "\nJim Templeton\n";
    cout << "\nChapter 5 in class 2\n";
	cout<<"\nThis program calculates the annual raise and/nthe salary aftre the raise.\n\n";
	// ==========get input==========================
	//
	cout << "How many years do you wish to calculate? ";
	cin >> years;
	cout<< "What is the annual salary ? \n";
	cin>> salary;
	cout<<"/n";

for(int count =1; count <= years; count++)
{
	raise = salary * RATE; //raise in $
	salary = salary+raise; // new salary
	totalSalary = totalSalary+salary; // total earnings for count years
	cout<<fixed<<showpoint<<setprecision(2);

	cout<< "Year "<< count << ""salary $" <<" raise: $"<<raise<<"\n";
	cout<<"/n Total acumulated salary = $"<<totalSalary
}


    cout << "\n\n\n\n"; //blank lines
    //
    system("pause"); // pause to see the output on the screen
    //
// =========now try this with a while loop!=============
//
salary = 0;
raise = 0;
totalSalary=0;
count = 1;
while(count<=years)
{
	raise = salary * RATE; //raise in $
	salary = salary+raise; // new salary
	totalSalary = totalSalary+salary; // total earnings for count years
	cout<<fixed<<showpoint<<setprecision(2);
	cout<< "Year "<< count << " raise: $"<<raise<<"\n";
	count = count+1;
}

	return 0; // return the 0 to indicate you returned from your pgm
}

