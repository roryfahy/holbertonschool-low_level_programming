#include "holberton.h"
/**
 * swap_int - swaps value of 2 ints
 * @a: pointer to int1
 * @b: pointer to int2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
