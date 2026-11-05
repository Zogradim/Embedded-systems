/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief Header file for data analysis functions.
 *
 * This header file declares the functions to analyze the statistics of an array
  that includes minimum, maximum, mean, median sorting the array
 largest to smallest and printing the results.
 *
 * @author Dimitris Zografakis
 * @date 5//11/2026
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array
 *
 * This function prints the statistics of an array including maximum minimum, mean and median.
 *
 * @param array pointer to dara array  
 * @param size size of the array
 */
 void print_statistics(unsigned char * array , unsigned int size);


/**
 * @brief Given an array and a length, prints the array to the screen
 * @param array pointer  to data array  
 * @param size size of the array
 */

 void print_array(unsigned char * array, unsigned int size);


 /**
 * @brief Given an array of data and a length, returns the mean value.
 *
 * @param array pointer to dara array  
 * @param size size of the array
 * @return Mean value 
 */
unsigned char find_mean(unsigned char * array , unsigned int size);

 
/**
 * @brief Given an array of data and a length, returns the median value.
 * @param array pointer  to data array  
 * @param size size of the array
 * @returns Median value
 */

 unsigned char find_median(unsigned char * array, unsigned int size);

 /**
 * @brief Given an array of data and a length, returns the maximum value.
 *
 * @param array pointer to dara array  
 * @param size size of the array
 * @return maximum value 
 */
 unsigned char find_maximum(unsigned char * array , unsigned int size);

 
/**
 * @brief Given an array of data and a length, returns the minimum value.
 * @param array pointer  to data array  
 * @param size size of the array
 * @return minimum value
 */

 unsigned char find_minimum(unsigned char * array, unsigned int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.
 * @param array pointer  to data array  
 * @param size size of the array
 */

 void sort_array(unsigned char * array, unsigned int size);

#endif /* __STATS_H__ */
