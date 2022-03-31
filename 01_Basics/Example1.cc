#include <iostream>

int main()
{
    float f_length;

    std::cout << "Please enter side length: ";
    std::cin >> f_length;

    std::cout << "Perimeter of the square" << f_length * 4 << std::endl;
    std::cout << "Area of square: " << f_length * f_length << std::endl;

    return 0;
}
