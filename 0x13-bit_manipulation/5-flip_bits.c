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

	for (; i < 64; i++)
		if ((n & (1UL << i)) != (m & (1UL << i)))
			flip++;
	return (flip);
}
