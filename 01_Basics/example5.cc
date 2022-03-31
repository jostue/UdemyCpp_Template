#include <iostream>

bool checkNumber(int num);

int main()
{
    int number;

    std::cout << "Please enter a number: " << std::endl;
    std::cin >> number;

    bool isPrim = checkNumber(number);

    std::cout << number << " is a prim number: " << std::boolalpha << isPrim << std::endl;
}

bool checkNumber(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
