// Jim Templeton
//Chapter 5 - in class 3 
// This program calculates a profit or loss depending on income\nand expenses.
// 
#include <iostream>
//#include <string>
#include <cstdlib>
//
using namespace std;
//
int main()
{
	// ======== define and set variables==============
	
	int number = 0; //number input
	int start = 1;
	int stop =5;
	int sum = 0;
	//
	// ==========Output user info=====================
    cout << "\nJim Templeton\n";
    cout << "\nChapter 5 in class 3\n";
	cout<<"\nThis program calculates a profit or loss depending on income\nand expenses.\n\n";
	// get input
	//get income
	cout<<"Income amount (negative number to end):";
	cin>>income;
	while (income>=0)
	{
		totInc=totInc+income;
		cout<<"Income amount (negative number to end):";
		cin>>income;
	}
	//get Expenses
	cout<<"\nExpense amount (negative number to end):";
	cin>>expense;
	while (expense>=0)
	{
		totExpense=totExpense+expense;
		cout<<"Expense amount (negative number to end):";
		cin>>expense;
	}
	// calculate PL
	profit_loss=totInc-totExpense;
	
	if (profit_loss>=0)
		{
			cout<<"\nProfit: $"<<profit_loss;
		}
	else
	{
		cout<<"\nLoss: $"<<profit_loss;
	}	
	
    cout << "\n\n\n\n";
    system("pause");
	return 0;
}
