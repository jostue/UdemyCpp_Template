#include <iomanip>
#include <iostream>

//1a) C++: static_cast<dtype>(varname)        Converts object from one type to another
//1b) C: (new dtype)(varname)

int main()
{
    double number = 3.14;

    std::cout << std::setprecision(20) << number << std::endl;

    int number2 = number;
    std::cout << std::setprecision(20) << number2 << std::endl;

    // C-Casting
    float number3 = (float)number;
    std::cout << std::setprecision(20) << number3 << std::endl;

    float number4 = (double)number3;
    std::cout << std::setprecision(20) << number4 << std::endl;


    // C++-Casting
    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(20) << number5 << std::endl;

    float number6 = static_cast<double>(number5);
    std::cout << std::setprecision(20) << number6 << std::endl;

    int number7 = 1234567;
    char number8 = static_cast<char>(number7);
    std::cout << std::setprecision(20) << number7 << std::endl;
    std::cout << std::setprecision(20) << number8 << std::endl;

    return 0;
}
