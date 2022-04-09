#include <iostream>

// Call by value
void f1(int *number)
{
    (*number)++;
}

// Call by reference
void f2(int &number)
{
    number++;
}

// Call by value
int f3(int number)
{
    return ++number;
}


int main()
{
    int num = 0;

    std::cout << num << std::endl;
    f1(&num);
    std::cout << num << std::endl;
    f2(num);
    std::cout << num << std::endl;
    num = f3(num);
    std::cout << num << std::endl;


    return 0;
}
