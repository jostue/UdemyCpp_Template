#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"

// Exercise 2
std::vector<double> max_row_values(Matrix &matrix)
{
    std::vector<double> resultVec;
    resultVec.reserve(matrix.size());

    std::cout << resultVec.size() << std::endl;
    std::cout << resultVec.capacity() << std::endl;

    for (const auto &row : matrix)
    {
        auto currentMax = row[0];
        for (const auto &value : row)
        {
            currentMax = value > currentMax ? value : currentMax;
        }
        resultVec.push_back(currentMax);
    }
    return resultVec;
}

// Exercise 3
bool boSortAsc(int i, int j)
{
    return i < j;
}

double sort_and_max(std::vector<double> &vec)
{
    std::sort(vec.begin(), vec.end(), boSortAsc);

    return vec.back();
}
