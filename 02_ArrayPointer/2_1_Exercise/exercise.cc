#include <iostream>

#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const unsigned int &length)
{
    double result = 0;
    for (int i = 0; i < (int)length; i++)
    {
        result += p_array[i];
    }
    return result;
}

// Exercise 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int *array_pointer = new int[length];
    for (int i = 0; i < (int)length; i++)
    {
        array_pointer[i] = value;
    }
    return array_pointer;
}
