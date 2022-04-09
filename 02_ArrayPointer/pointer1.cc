#include <iostream>

int main()
{
    int num = 5;
    int *p = &num;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;


    return 0;
}
