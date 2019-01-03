#include <iostream>
/**
 * Problem 5:
 * Write a program that takes the length of the base and the height
 *  and calculates the area of the triangle.
 *  The formula for the area of a triangle is:
 *  A = 1/2 * b * h
 *  where b is the base and h is the height.
 */

int main()
{
    int b;
    int h;

    std::cout << "Enter Number Base " << std::endl;
    std::cin >> b;

    std::cout << "Enter Number Height " << std::endl;
    std::cin >> h;

    std::cout << "********************************" << std::endl;
    std::cout << "Base: " << b << std::endl;
    std::cout << "Height: " << h << std::endl;
    std::cout << "Area of the Triangle: " <<  b / 2 * h << std::endl;
    std::cout << "Area of the Triangle: " << 0.5 * b * h << std::endl;
    std::cout << "********************************" << std::endl;


    return 0;
}