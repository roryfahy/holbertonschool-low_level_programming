#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a given function on every element of a given array
 * @array: array to be opperated on
 * @size: size of array
 * @action: pointer to a function that takes an int and returns nothing
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (; size > 0; i++, size--)
		action(array[i]);
}
