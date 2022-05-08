#pragma once

#include "DynArray.h"

/**
 * @brief Calculates the average of an array
 *
 * @param dynArray  Dynamic array
 * @param size      Size of array
 * @return      Array Average
 */
double mean(DynamicArray &dynArray);

/**
 * @brief Calculates the median of an array
 *
 * @param dynArray  Sorted Dynamic array
 * @param size      Size of array
 * @return      Array median
 */
double median(DynamicArray &dynArray);

/**
 * @brief Calculates the sum of an array
 *
 * @param dynArray  Dynamic array
 * @return      Array sum
 */
double sum(DynamicArray &dynArray);

/**
 * @brief Calculates the variance
 *
 * @param dynArray  Dynamic array
 * @return      Array variance
 */
double variance(DynamicArray &dynArray);

/**
 * @brief Calculates the standard deviation
 *
 * @param dynArray  Dynamic array
 * @return      Array standard deviation
 */
double stddev(DynamicArray &dynArray);
