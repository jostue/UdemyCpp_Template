#include <iostream>

#include "exercise.h"

// Exercise 1
void push_back(int *&input_array, const unsigned int &size, const int &value)
{
    int *temp_array = new int[size + 1];
    for (int i = 0; i < (int)size; i++)
    {
        temp_array[i] = input_array[i];
    }
    temp_array[size] = value;
    delete[] input_array;
    input_array = temp_array;
}

// Exercise 2
void pop_back(int *&input_array, const unsigned int &size)
{
    int *temp_array = new int[size - 1];
    for (int i = 0; i < (int)size - 1; i++)
    {
        temp_array[i] = input_array[i];
    }
    delete[] input_array;
    input_array = temp_array;
}
