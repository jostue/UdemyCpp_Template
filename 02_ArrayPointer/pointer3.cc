#include <iostream>

template <typename T>
void print_pointer(T *pointer)
{
    std::cout << "Deref: " << *pointer << " Ref: " << pointer << " Pointer Adress: " << &pointer << std::endl;
}

int main()
{
    int num1 = 1337;
    double num2 = 13.37;

    int *c = &num1;

    print_pointer(c);

    *c -= 10;

    print_pointer(c);

    return 0;
}
