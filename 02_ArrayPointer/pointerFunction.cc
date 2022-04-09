#include <iostream>

void func(int *p_func)
{
    std::cout << "Func: p_func " << p_func << std::endl;
    std::cout << "Func: &p_func " << &p_func << std::endl;
}


int main()
{
    int *p_number = new int{4};
    std::cout << "Main: p_number " << p_number << std::endl;
    std::cout << "Main: &p_number " << &p_number << std::endl;

    func(p_number);

    return 0;
}
