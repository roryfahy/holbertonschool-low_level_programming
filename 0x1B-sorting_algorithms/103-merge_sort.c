#include "sort.h"
#include <stdio.h>

/**
 * do_merge_sort - recursive helper function to sort via merge sort
 * @array: array of ints to sort
 * @copy: copy of array
 * @size: size of array
 * @iStart: start of sub array
 * @iEnd: end of sub array
 */
void do_merge_sort(int *array, int *copy, st size, st iStart, st iEnd)
{
	size_t iLeft, iRight, middle;

	if (iEnd - iStart < 1)
		return;
	middle = iEnd - (iEnd - iStart) / 2 - 1;
	do_merge_sort(array, copy, size, iStart, middle);
	do_merge_sort(array, copy, size, middle + 1, iEnd);
	iLeft = iStart;
	iRight = middle + 1;
	printf("Merging...\n");
	printf("[left]: ");
	print_array(copy + iStart, middle - iStart + 1);
	printf("[right]: ");
	print_array(copy + middle + 1, iEnd - middle);
	while (iLeft <= middle || iRight <= iEnd)
	{
		if (iRight > iEnd || (copy[iLeft] < copy[iRight] && iLeft <= middle))
		{
			array[iLeft + iRight - middle - 1] = copy[iLeft];
			iLeft++;
		}
		if (iLeft > middle || (copy[iRight] < copy[iLeft] && iRight <= iEnd))
		{
			array[iLeft + iRight - middle - 1] = copy[iRight];
			iRight++;
		}
	}
	for (iLeft = iStart; iLeft <= iEnd; iLeft++)
		copy[iLeft] = array[iLeft];
	printf("[Done]: ");
	print_array(copy + iStart, iEnd - iStart + 1);
}

/**
 * merge_sort - sort an array of ints via merge sort algorithm
 * @array: array of ints to sort
 * @size: size of array
 */
void merge_sort(int *array, st size)
{
	int *copy;
	st i;

	copy = malloc(size * sizeof(int));
	if (copy == NULL)
		return;
	for (i = 0; i < size; i++)
		copy[i] = array[i];
	do_merge_sort(array, copy, size, 0, size - 1);
	free(copy);
}
