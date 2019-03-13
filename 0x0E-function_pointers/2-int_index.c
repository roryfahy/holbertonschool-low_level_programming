#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer in an array
 * @array: integer array containing the operand items
 * @size: size of array
 * @cmp: pointer to function taking an int and returning an int
 *
 * Return: index of first matching item in the array or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; size > 0; size--, i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
