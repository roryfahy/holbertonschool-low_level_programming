#include "holberton.h"
/**
 * _isupper - checks for uppercase char
 * @c: stores char value
 *
 * Return: 1 if c == upper; 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
