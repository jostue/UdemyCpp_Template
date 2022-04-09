#include <iostream>

#define ARRAY_SIZE 5

int main()
{
    float array1[ARRAY_SIZE] = {};
    float array2[ARRAY_SIZE] = {};

    std::cout << "Please enter " << ARRAY_SIZE << " numbers for array 1" << std::endl;
    for (int i = 0; i < int(sizeof(array1) / sizeof(float)); i++)
    {
        std::cin >> array1[i];
    }

    std::cout << "Please enter " << ARRAY_SIZE << " numbers for array 2" << std::endl;
    for (int i = 0; i < int(sizeof(array2) / sizeof(float)); i++)
    {
        std::cin >> array2[i];
    }

    std::cout << "Result: " << std::endl;
    for (int i = 0; i < int(sizeof(array2) / sizeof(float)); i++)
    {
        std::cout << array1[i] + array2[i] << std::endl;
    }

    int my_matrix[3][2] = {0, 1, 2, 3, 4, 5};

    return 0;
}
