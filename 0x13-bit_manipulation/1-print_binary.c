#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - print a number in binary
 * @n: unsigned long int (8bytes) to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;

	if (n == 0)
		_putchar('0');
	for (; mask; mask >>= 1)
		if (mask & n)
			break;
	printf("\n %lu mask\n", mask);
	for (; mask; mask >>= 1)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
