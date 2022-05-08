#pragma once
#include <cstddef>

/**
 * @brief Dynamic array structure
 *
 * @param double *m_data
 * @param std::size_t m_length
 *
 *
 */
struct DynamicArray
{
    double *m_data;
    std::size_t m_length;
};


/**
 * @brief Create a dynamic array object
 *
 * @param value     Fill value for the array
 * @param length    length of the array
 * @return          dynamic array object
 */
DynamicArray create_dynamic_array(const double &value, const std::size_t &length);

/**
 * @brief Push back the value at the end of the vector
 *
 * @param dynamicArray  Dynamic Array
 * @param value         Value to append
 */
void push_back(DynamicArray &dynamicArray, const int &value);

/**
 * @brief Pop back the value at the end of the vector
 *
 * @param dynamicArray  DynamicArray
 */
void pop_back(DynamicArray &dynamicArray);
