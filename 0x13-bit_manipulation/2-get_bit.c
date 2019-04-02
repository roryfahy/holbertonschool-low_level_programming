#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - return value of bit at index
 * @n: number
 * @index: index to get val
 * Return: val at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	switch (n & (1 << index))
	{
	case 0:
		return (0);
	default:
		return (1);
	}
}
