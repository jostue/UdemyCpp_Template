#include <iostream>

template <typename T>
void print_pointer(T *&pointer)
{
    std::cout << "Deref: " << *pointer << " Ref: " << pointer << " Pointer Adress: " << &pointer << std::endl;
}

template <typename T>
void destroy_pointer(T *&p)
{
    delete p;
    p = nullptr;
}

int main()
{

    int *c = new int{1337};

    print_pointer(c);

    *c -= 10;

    print_pointer(c);

    destroy_pointer(c);

    std::cout << c;
    //print_pointer(c);

    return 0;
}
