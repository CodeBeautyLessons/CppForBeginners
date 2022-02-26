#include <iostream>

int main()
{
    float annualSalary;

    std::cout << "Enter your annual salary: ";

    std::cin >> annualSalary;

    float monthtlySalary = annualSalary / 12;

    std::cout << "Your monthly salary is " << monthtlySalary << std::endl;
    std::cout << "In 10 years you will earn " << annualSalary * 10;

    char character = 'a';

    int yearOfBirth = 1994;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 425663636;

    std::cout << "Size of int is " << sizeof(int) << " bytes\n";
    std::cout << "Int min value is " << INT_MIN << std::endl;
    std::cout << "Int max value is " << INT_MAX << std::endl;

    std::cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";
    std::cout << "Unsigned int max value is " << UINT_MAX << std::endl;

    std::cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    std::cout << "Size of char is " << sizeof(char) << " bytes\n";
    std::cout << "Size of float is " << sizeof(float) << " bytes\n";
    std::cout << "Size of double is " << sizeof(double) << " bytes\n";

    int intMax = INT_MAX;
    std::cout << intMax;
    std::cout << intMax + 1;

    system("pause>0");
}
