#include <iostream>


// Call by value (local copy)
void func(int *p_func)
{
    std::cout << "Func: p_func " << p_func << std::endl;
    std::cout << "Func: &p_func " << &p_func << std::endl;
}

// Call by reference
void g(int *&p_func)
{
    std::cout << "g: p_func " << p_func << std::endl;
    std::cout << "g: &p_func " << &p_func << std::endl;
}


void func_test(const int &test1)
{
}


int main()
{
    int *p_number = new int{4};
    std::cout << "Main: p_number " << p_number << std::endl;
    std::cout << "Main: &p_number " << &p_number << std::endl;

    func(p_number);

    g(p_number);

    return 0;
}
