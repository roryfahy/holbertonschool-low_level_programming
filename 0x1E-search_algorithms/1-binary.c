#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array of ints using binary
 * @array: ptr to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int len, idx = 0;
	
	if (array == NULL)
		return (-1);
	len = (size_t) size;

	while (1)
	{
		printf("Searching in array: ");
		for (; idx < len; idx++)
		{
			printf("%d", array[idx]);
			if (idx != size - 1)
				printf(", ");
		}
		if (array[idx] < value)
			
		if (array[idx] > value)
			look in left array;
		if (array[idx] == value)
			return (idx);
		if (len <= 1)
			return (-1);
	}
}
