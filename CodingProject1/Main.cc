#include <cstddef>
#include <iostream>

#include "AlgoArray.h"
#include "DynArray.h"

// int main()
int main()
{
    DynamicArray myArray = create_dynamic_array(0, 5);

    for (std::size_t i = 0; i < myArray.m_length; i++)
    {
        myArray.m_data[i] = (double)i;
    }


    std::cout << "Mean: " << mean(myArray) << std::endl;
    std::cout << "Median: " << median(myArray) << std::endl;
    std::cout << "Variance: " << variance(myArray) << std::endl;
    std::cout << "Standard deviation: " << stddev(myArray) << std::endl;

    return 0;
}
