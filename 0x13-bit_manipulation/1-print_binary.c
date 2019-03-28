#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - return len of str
 * @str: sting to count
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int count = 0;

	for (; str && *str; str++, count++)
		;
	return (count);
}
/**
 * print_binary - print a number in binary
 * @n: unsigned long int (8bytes) to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1 << 31;
	int first = 0;

	if (n == 0)
		_putchar('0');
	for (; mask > 0; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
			first = 1;
		}
		else if (!(n & mask) && first)
			_putchar('0');
		else
			continue;
	}
}
