// function comments in mortgage.h
#include <iostream>
#include "Mortgage.h"
using namespace std;

mortgage::mortgage()
{
	loan = 0;
	interestRate = 0;
	years = 0;
	monthlyPayment = 0; 
	term = 0;
	total = 0;
}
void mortgage::setLoanAmount(float value)
{
	loan = value;
}
void mortgage::setInterestRate(float value)
{
	interestRate = value;
}
void mortgage::setYears(int value)
{
	years = value;
}
float mortgage::calcMonthlyPayment()
{
	calcTerm();
	monthlyPayment = (loan * (interestRate / 12) * term) / (term - 1);
	return monthlyPayment;
}
float mortgage::calcTotalAmountDue()
{
	total = monthlyPayment * 12 * years;
	return total;
}
void mortgage::calcTerm()
{
	term = pow(1 + (interestRate / 12), 12 * years);
}