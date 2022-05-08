#include <iostream>

constexpr int faculty(int n)
{
    if (n > 1)
    {
        return n * faculty(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int l = faculty(3);

    std::cout << l << std::endl;

    // Use case
    int array[faculty(3)]{};

    return 0;
}
