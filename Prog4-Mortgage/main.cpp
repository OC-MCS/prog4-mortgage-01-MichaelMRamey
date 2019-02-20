// *****************************
// Michael Ramey			   *
// 8/20/19					   *
// Program 4: Mortgage		   *
//******************************
// Known Bug: When zero values are given for interest rate the calculations return "-nan(ind)" instead of zero.

#include <iostream>
#include <string>
#include "Mortgage.h"
using namespace std;

bool parseInt(string, int&);
bool parseFloat(string, float&);

int main()
{
	mortgage customer;  // Define a customer of the mortgage class
	string input;  // Variable for input validation.  Will take from getline cin
	float numInput;  // Float variable for a validated float number.  Used for loan and interest.  Will be sent to mortgage class
	int yearInput;  // Int variable for the validated year.  Will be sent to mortgage class.
	cout << "How much would you like to loan?";
	getline(cin, input);
	if (!parseFloat(input, numInput) || numInput < 0)  // Input validation.  Handles text input and negative value input.
	{
		cout << "Invalid input, please enter a valid number" << endl;
	}
	customer.mortgage::setLoanAmount(numInput); // Send validated input to class to be stored in loan var

	cout << "What is your interest rate?";
	getline(cin, input);
	if (!parseFloat(input, numInput) || numInput < 0)
	{
		cout << "Invalid input, please enter a valid number" << endl;
	}
	customer.mortgage::setInterestRate(numInput);

	cout << "How many years is the loan for?";
	getline(cin, input);
	if (!parseInt(input, yearInput) || numInput < 0)
	{
		cout << "Invalid input, please enter a valid number" << endl;
	}
	customer.mortgage::setYears(yearInput);

	// Calc and display values.  Will be done using values and functions in the mortgage class
	cout << "Your Monthly payment is: " << customer.mortgage::calcMonthlyPayment() << endl;
	cout << "Your total payment throughout the whole loan is: " << customer.mortgage::calcTotalAmountDue() << endl;
}

bool parseFloat(string sval, float& val)
{
	float num;  // variable to store the input as a float if it works
	bool success = true;  // variable that will be returned to signify whether the parse worked or not
	try
	{
		num = stof(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

bool parseInt(string sval, int& val)
{
	int num;  // variable to store the input as an int if it works
	bool success = true;  // variable that will be returned to signify whether the parse worked or not
	try
	{
		num = stoi(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}