#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: points to a memory area
 * @b: holds constant byte
 * @n: number of bytes of mem area to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *rep = s;
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*rep = b;
		rep++;
	}
	return (s);
}
