#include <iostream>


int read_number()
{
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    return number;
}

bool is_even(int number)
{
    return ((number % 2) == 0);
}

int main()
{
    int entered_num = read_number();
    bool bo_is_even = is_even(entered_num);

    std::cout << "Number " << entered_num << " is even: " << std::boolalpha << bo_is_even << std::endl;
    return 0;
}
