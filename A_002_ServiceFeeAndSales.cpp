#include <iostream>



/**
 * Problem 2:
 * Write a program that takes the total bill
 *  and calculates the service fee and sales tax.
 *  The service fee is 5% and the sales tax is 25%.
*/
int main()
{
    int BillValue;

    std::cout << "Enter Number Total Bill " << std::endl;
    std::cin >> BillValue;
    
    std::cout << "********************************" << std::endl;
    std::cout << "Total Bill: " << BillValue << std::endl;
    std::cout << "Service Fee: " << BillValue * 0.05 << std::endl;
    std::cout << "Sales Tax: " << BillValue * 0.25 << std::endl;
    std::cout << "********************************" << std::endl;
    return 0;
}