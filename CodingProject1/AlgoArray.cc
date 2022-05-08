#include <cstddef>
#include <math.h>

#include "AlgoArray.h"
#include "DynArray.h"

double mean(DynamicArray &dynArray)
{
    double meanValue = sum(dynArray);

    return meanValue / (double)dynArray.m_length;
}

double median(DynamicArray &dynArray)
{
    double medianValue = 0.0;
    std::size_t median_index = dynArray.m_length / 2;

    if (dynArray.m_length > 0)
    {
        if (dynArray.m_length % 2 == 0)
        {
            medianValue = (dynArray.m_data[median_index] + dynArray.m_data[median_index - 1]) / 2.0;
        }
        else
        {
            medianValue = dynArray.m_data[median_index];
        }
    }
    return medianValue;
}

double sum(DynamicArray &dynArray)
{
    double sum = 0.0;
    for (std::size_t i = 0; i < dynArray.m_length; i++)
    {
        sum += dynArray.m_data[i];
    }
    return sum;
}

double variance(DynamicArray &dynArray)
{
    double varianceValue = 0.0;
    double meanValue = mean(dynArray);

    for (std::size_t i = 0; i < dynArray.m_length; i++)
    {
        double diff_i = dynArray.m_data[i] - meanValue;
        varianceValue += pow(diff_i, 2.0) / (double)dynArray.m_length;
    }

    return varianceValue;
}

double stddev(DynamicArray &dynArray)
{
    return sqrt(variance(dynArray));
}
