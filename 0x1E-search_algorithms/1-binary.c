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
	int idx, iCheck, iStop = (int) size - 1;
	int iStart = 0;

	if (array == NULL)
		return (-1);

	iCheck = iStop / 2;
	while (1)
	{
		printf("Searching in array: ");
		for (idx = iStart; idx <= iStop; idx++)
			printf(idx < iStop ? "%d, " : "%d\n", array[idx]);
		if (iStop < iStart)
			return (-1);
		if (array[iCheck] == value)
			return (iCheck);
		if (array[iCheck] < value)
		{
			iStart = iCheck + 1;
		}
		else if (array[iCheck] > value)
		{
			iStop = iCheck - 1;
		}
		iCheck = (iStop - iStart) / 2 + iStart;
	}
}
