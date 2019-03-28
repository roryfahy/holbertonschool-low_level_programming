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

	for (; *str; str++, count++)
		;
	return (count);
}
/**
 * binary_to_uint - convert a binary numb to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int len, i;

	len = _strlen(b);
	for (i = 0, len--; b && len >= 0; len--, i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint += (b[i] - '0') * (1 << len);
	}

	return (uint);
}
