#include <iostream>


/**
 * Problem 3:
 * Write a program that takes the loan amount and the monthly installment
 *  and calculates the total number of months.
*/

int main()
{
    int LoanAmount;
    int MonthlyPayment;
    int TotalMonthly;

    std::cout << "Enter Number Loan Amount " << std::endl;
    std::cin >> LoanAmount;


    std::cout << "Enter Number Monthly Payment " << std::endl;
    std::cin >> MonthlyPayment;

    TotalMonthly = LoanAmount / MonthlyPayment;
    std::cout << "********************************" << std::endl;
    std::cout << "Loan Amount: " << LoanAmount << std::endl;
    std::cout << "Monthly Payment: " << MonthlyPayment << std::endl;
    std::cout << "Total Months: " << TotalMonthly << std::endl;
    std::cout << "Total Years: " << TotalMonthly / 12 << std::endl;
    std::cout << "********************************" << std::endl;

    return 0;
}