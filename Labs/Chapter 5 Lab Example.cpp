// Chapter 5 - Lab Example Fill-in-Statements
// This program determines who is at the front and the end of a line. 
// 
#include <iostream>
#include <string>
#include <cstdlib>>
//
// ADD MISSING STATEMENT 1 TO INCLUDE STRING DATA

using namespace std;
//
int main()
{
	const int MAX_NUM = 15;  // Maximum number of students
	string name,             // Student name
		   first,            // Smallest name
		   last;             // Greatest name
	int    numStudents;      // Number of students
	int count; // use to control loop
    //
    cout << "enter your first and last name here.\n\n";
    cout << "Chapter 5 Lab Example\n\n";
	// Input and validate the number of students
	cout << "How many students are in the class (1 to " << MAX_NUM << ")? ";
	cin  >> numStudents;
	// 
	// USE A while LOOP TO VALIDATE NUMBER OF STUDENTS ENTERED.
    // CAN'T BE LESS THAN 1 OR MORE THAN MAXIMUM NUMBER OF STUDENTS
  while(numStudents <1 ||numStudents>MAX_NUM)
	{
		cout << "Class size should be between 1 and " << MAX_NUM << ".\n"
			 << "Please re-enter the number of students in the class: ";
	}
	// ADD MISSING STATEMENT 3
	// USE cin.get TO CONSUME THE \n IN THE INPUT BUFFER
cin.get();  //cin<< only works for numerical data

	// Input the first student's name
	cout << "\nEnter student 1's last name: ";
	//
	// ADD MISSING STATEMENT 4
	// USE getline TO ENTER LAST NAME OF STUDENT
getline(cin,name);
    //
    // ADD MISSING STATEMENT 5 
	// INITIALIZE FIRST STUDENT TO BE LAST NAME OF STUDENT
  first = name;
    //
    // ADD MISSING STATEMENT 6 
	// INITIALIZE LAST STUDENT TO BE LAST NAME OF STUDENT
  last = name;
    //
	// This is the counter for the rest of the students
	count = 2;
	//
	// ADD MISSING STATEMENT 7 
	// USE A while LOOP TO ENTER STUDENTS.
    // CAN'T BE MORE THAN MAXIMUM NUMBER OF STUDENTS
  while(count<=numStudents)
	{
		cout << "Enter the next student's last name: ";
		// ADD MISSING STATEMENT 8
	    // USE getline TO ENTER LAST NAME OF STUDENT
	    getline(cin,name);
		// If this new student belongs at the front or end 
		// of the line, logically put them there
		if (name < first)
			first = name;
		else if (name > last)
			last = name;
			count = count + 1;
	}
  	// Display results
	cout << "\n" << first << " is at the head of the line." << "\n";
	cout << last << " is at the end of the line." << "\n";
    cout << "\n\n\n\n";
    system("pause");
	return 0;
}
