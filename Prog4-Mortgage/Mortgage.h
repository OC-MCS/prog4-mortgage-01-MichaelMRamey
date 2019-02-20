#pragma once
// header file for Mortgage class
class mortgage
{
private:
	float monthlyPayment, loan, interestRate, term, total; // monthlyPayment stores what is due at the end of each month.  loan stores the value the customer wants to take out of the bank.  interestRate stores the rate the user accumulates debt with the loan.  Term stores the interest rate over a one month term.  Total stores the total cost of the entire loan.
	int years;  // Years stores the number of years the loan spans
public:
	mortgage();  // constructor to initialize vars
	void setLoanAmount(float);  // takes input to set amount user wishes to loan
	void setInterestRate(float); // takes input to set the user's interest rate
	void setYears(int);  // takes input to set how many years the user will loan money
	float calcMonthlyPayment();  // calculates and returns the monthly payment due
	float calcTotalAmountDue();	// calculates and returns the total payment due at the end of the loan
	void calcTerm();	// calculates the interest rate for a one month term.  Used in calcMonthly payment
};
