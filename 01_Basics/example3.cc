#include <iostream>

int main()
{
    int number, absolute;
    std::cout << "Please enter an number: ";
    std::cin >> number;

    absolute = number;
    if (absolute < 0)
    {
        absolute *= -1;
    }

    std::cout << "Absolute number: " << absolute << std::endl;
}
