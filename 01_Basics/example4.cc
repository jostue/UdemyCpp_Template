#include <iostream>

int main()
{
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;

    bool leap_year = false;
    if (year % 4 == 0)
    {
        leap_year = true;
        if ((year % 100 == 0) && (year % 400 != 0))
        {
            leap_year = false;
        }
    }

    std::cout << "The year " << year << " is a leap year. "
              << "That is " << std::boolalpha << leap_year << std::endl;
}
