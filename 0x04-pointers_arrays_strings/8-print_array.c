#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of ints followed by a newline
 * @a: pointer to first address in array
 * @n: number of items to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
