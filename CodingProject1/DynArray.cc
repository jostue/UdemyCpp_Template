#include <iostream>

#include "DynArray.h"

DynamicArray create_dynamic_array(const double &value, const std::size_t &length)
{
    DynamicArray newArray{nullptr, length};
    newArray.m_data = new double[length];
    for (std::size_t i = 0; i < length; i++)
    {
        newArray.m_data[i] = value;
    }
    return newArray;
}

void push_back(DynamicArray &dynamicArray, const int &value)
{
    double *temp_array = new double[dynamicArray.m_length + 1];
    for (std::size_t i = 0; i < dynamicArray.m_length; i++)
    {
        temp_array[i] = dynamicArray.m_data[i];
    }
    temp_array[dynamicArray.m_length] = value;
    delete[] dynamicArray.m_data;
    dynamicArray.m_data = temp_array;
    dynamicArray.m_length++;
}

void pop_back(DynamicArray &dynamicArray)
{
    double *temp_array = new double[dynamicArray.m_length - 1];
    for (std::size_t i = 0; i < dynamicArray.m_length - 1; i++)
    {
        temp_array[i] = dynamicArray.m_data[i];
    }
    delete[] dynamicArray.m_data;
    dynamicArray.m_data = temp_array;
    dynamicArray.m_length--;
}
