//Chapter 5 in clsaa
//
//This program displays the total points earned on an exam
//and the average
//
//include libraries
#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
//
//start main()
int main()
{
	//declare variables
	//
	double score = 0;// score
	double totalPoints = 0;//accumulator
	double average = 0.0; // average
	int counter = 0;// counter
	char another = ' '; //loop again? (blank space between ' ')
	//
	//output user information
	cout<<"\nJim Templeton.\n\n";
	cout<<"Chapter 5 in class 1.\n\n";
	//
	cout<<"This program displays the total points earned on an"
	    <<" exam\n"
	    <<"and the average.\n\n";
	//start the do loop
	do
	{
		//initialize total points to be 0
		totalPoints = 0;
		//
		//initialize counter to be 0
		counter = 0;
		//
		//input first score
		cout<<"First score (-1 to stop):";
		cin>>score; 
	
		//loop while score in not = -1
		while (score!=-1)
		{
			//update the accumulator total points by adding score
			totalPoints=totalPoints+score;
			//input another score
			cout<<"Next score (-1 to stop):";
			cin>>score;
			//
			//increment the counter by 1
			counter++;
		}  //end the while
		//
		//calculate average which is the accumulator divided by the counter
		average = totalPoints/counter;
		//display the total points
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"the average score is :"<<average;
		cout<<"\n\nAnother student (Y/N)?";
		cin>>another;
	//
	//Use "while" loop to determine if another score is to be added.
	} while(toupper(another)=='Y');
	cout<<"\n\n\n\n";
	system("pause");
	return 0;
}  //end of main function
