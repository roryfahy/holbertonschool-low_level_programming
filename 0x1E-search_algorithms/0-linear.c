#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in an array of ints using linear search
 * @array: array to search through
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of first instance of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;

	for (; (size_t) idx < size; idx++)
	{	
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
