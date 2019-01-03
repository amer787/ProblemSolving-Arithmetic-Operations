#include <iostream>


/**
 * Problem 6:
 * Write a program that takes the length of the semi-major axis and the semi-minor axis
 *  and calculates the area of the ellipse.
 *  The formula for the area of an ellipse is:
 *  A = π * b^2 / 4 * (2a - b) / (2a + b)
 *  where a is the semi-major axis and b is the semi-minor axis.
 */

int main()
{
    int a;
    int b;
    double PI = 3.14;

    std::cout << "Enter Number Semi-Major Axis " << std::endl;
    std::cin >> a;

    std::cout << "Enter Number Semi-Minor Axis " << std::endl;
    std::cin >> b;

    std::cout << "********************************" << std::endl;
    std::cout << "Semi-Major Axis: " << a << std::endl;
    std::cout << "Semi-Minor Axis: " << b << std::endl;
    std::cout << "Area of the Ellipse: " << PI * b * b / 4 * (2 * a - b) / (2 * a + b) << std::endl;
    std::cout << "********************************" << std::endl;

    return 0;
}