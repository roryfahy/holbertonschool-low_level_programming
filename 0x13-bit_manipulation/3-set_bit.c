#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - set the value of a bit to 1
 * @n: number
 * @index: index to get val
 * Return: 1 on success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	*n |= 1 << index;
	return (1);
}
