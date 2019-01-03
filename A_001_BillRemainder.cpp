#include <iostream>


/**
 * Problem 1:
 * Write a program that takes the total bill
 *  and the cash paid and calculates the remainder.
*/

int main()
{
    int TotalBill; 
    int CashPaid;
 
    std::cout << "Enter Number Total Bill " << std::endl;
    std::cin >> TotalBill;



    std::cout << "Enter Number Cash Paid " << std::endl;
    std::cin >> CashPaid;


    std::cout << "********************************" << std::endl;
    std::cout << "Total Bill: " << TotalBill << std::endl;
    std::cout << "Cash Paid: " << CashPaid << std::endl;
    std::cout << "Remainder: " << CashPaid - TotalBill << std::endl;
    std::cout << "********************************" << std::endl;

    return 0;
}