//iostream - controls input and output
//use by 'cin' and "cout"
#include <iostream>
#include <cstdlib>
//
//namespace std uses the c++ std lib
using namespace std;
//
// main is a driver function it returns an integer
//
//begin function program named "main()"
int main()
{   // must have the open curly brace
    //
    //declare and initialize variables
    int number1 = 14; // first integer
    int number2=12; //second integer
    double number3=7.25; //first double
    double number4 = 1.25; //second double
    int answer1 = 0; // initialize the answer to zero
    double answer2=0.0; //ininitlize to zero
    const string name = "James Templeton";
    //
    //output heading information
    //
    cout<<"\n"<< name;
    cout<<"\n\nChapter 2 Lab";
    //
    cout<<"\n\nThis program calculates the sum of two integer numbers\n";
    cout<<"and the sum of two double numbers.  It also calculates the \n";
    cout<<"modulus of the sum of two ineger numbers.\n";
    //
    cout<<"\n\nNumber 1 is "<<number1;
    cout<<"\nNumber 2 is "<<number2;
    //
    cout<<"\n\nNumber 3 is "<<number3;
    cout<<"\nNumber 4 is "<<number4;
    //
    //calculate the sum of answer1 by adding number1 and number2
    answer1=number1+number2;
    //output answer1
    cout<<"\n\n"<<"sum of number 1 and number 2 is "<<answer1;
    //
    //output the moduulus 8 of answer 1
    cout<<"\nThe modulus 8 of "<<answer1<<"is "<<answer1%8;
    //
    //calculate sum of answer2 by adding number 3 and number4
    answer2=number3+number4;
    //
    cout<<"\n\n"<<"sum of number 3 and number 4 is "<<answer2;
    //skip 2 line
    cout<<"\n\n\n";
    //pause to viwe numbers
    system("pause");
    //
    //return 0 - no errors
    return 0;
} //close the brace
