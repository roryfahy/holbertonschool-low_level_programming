#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - count how many bits to flip
 * @n: number
 * @m: other number
 * Return: number of bits needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	int i = 0;

	for (; i < 32; i++)
		if ((n & (1 << i)) != (m & (1 << i)))
			flip++;
	return (flip);
}
