#include <iostream>

int main()
{
    // Heap allocation
    int *p = new int[4]{4, 3, 2, 1};

    float *p2 = new float{0.0};

    std::cout << p[0] << std::endl;
    std::cout << p[3] << std::endl;

    // Heap de-allocation
    delete p;
    p = nullptr;
    delete p2;
    p2 = nullptr;

    // ..
    p = new int{6};
    delete p;
    p = nullptr;

    return 0;
}
