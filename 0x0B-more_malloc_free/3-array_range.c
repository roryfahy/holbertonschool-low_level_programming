#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * array_range - creates an array of ints
 * @min: min value int of array
 * @max: max value int in array
 *
 * Return: a pointer to an array of ints
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = min + i;
	return (ptr);
}
