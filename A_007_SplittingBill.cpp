#include <iostream>


/**
 * Problem 7:
 * Calculate how much each person needs to pay when splitting a restaurant bill
 *  evenly between a group of friends, including tip.
*/

int main()
{
    int TotalBill;
    int NumberOfPeople;
    int Tip;
    int TotalBillWithTip;
    int EachPersonPays;

    std::cout << "Enter Number Total Bill " << std::endl;
    std::cin >> TotalBill;

    std::cout << "Enter Number Number of People " << std::endl;
    std::cin >> NumberOfPeople;

    std::cout << "Enter Number Tip " << std::endl;
    std::cin >> Tip;

    TotalBillWithTip = TotalBill + Tip;
    EachPersonPays = TotalBillWithTip / NumberOfPeople;

    std::cout << "********************************" << std::endl;
    std::cout << "Total Bill: " << TotalBill << std::endl;
    std::cout << "Number of People: " << NumberOfPeople << std::endl;
    std::cout << "Tip: " << Tip << std::endl;
    std::cout << "Total Bill with Tip: " << TotalBillWithTip << std::endl;
    std::cout << "Each Person Pays: " << EachPersonPays << std::endl;
    std::cout << "********************************" << std::endl;

    return 0;
}


// another way to solve the problem 
// #include <iostream>
// using namespace std;

// int main() {
//     double totalBill, tipRate;
//     int numberOfFriends;

//     cout << "Enter the total bill amount: ";
//     cin >> totalBill;
//     cout << "Enter tip percentage (as a whole number): ";
//     cin >> tipRate;
//     cout << "Enter the number of friends splitting the bill: ";
//     cin >> numberOfFriends;

//     double totalWithTip = totalBill * (1 + tipRate / 100);
//     double amountPerPerson = totalWithTip / numberOfFriends;

//     cout << "Each person should pay: $" << amountPerPerson << endl;
//     return 0;
// }
