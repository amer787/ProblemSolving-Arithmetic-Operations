#include <iostream>

/**
 * Problem 4: BMI Calculator
 * Write a program that takes the weight in kilograms
 *  and the height in meters
*/


int main()
{
    float weight;
    float height;
    float bmi;

    std::cout << "Enter Number Weight in Kilograms " << std::endl;
    std::cin >> weight;

    std::cout << "Enter Number Height in Meters " << std::endl;
    std::cin >> height;

    bmi = weight / (height * height);
    std::cout << "********************************" << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "your is BMI: " << bmi << std::endl;
    std::cout << "********************************" << std::endl;

    return 0;
}