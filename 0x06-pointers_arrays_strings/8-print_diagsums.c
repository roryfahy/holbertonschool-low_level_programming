#include <stdio.h>
#include "holberton.h"
#define NULL ((void *)0)
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: pointer to a char
 * @size: size of square?
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < (size * size); i += (size + 1))
		sum1 += a[i];
	for (i = (size - 1); i < (size * size) - (size - 1); i += (size - 1))
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
